
/*
Para debugar via serial basta aplicar o seguinte comando no terminal:

 java net.tinyos.tools.PrintfClient -comm serial@/dev/ttyUSB1:57600

*/

#include "TKN154.h"
#include "app_profile.h"
#include "printf.h"

module EnviaBeaconsP
{
  uses {
    interface Boot;
    interface MLME_RESET;
    interface MLME_START;
    interface MLME_SET;
    interface MLME_GET;
    interface IEEE154TxBeaconPayload;
    interface Leds;
  }
} implementation {

 event void Boot.booted() {
    call MLME_RESET.request(TRUE);
  }

  event void MLME_RESET.confirm(ieee154_status_t status)
  {
    if (status != IEEE154_SUCCESS)
      return;
    call MLME_SET.phyTransmitPower(TX_POWER);
    call MLME_SET.macShortAddress(COORDINATOR_ADDRESS);
    call MLME_SET.macAssociationPermit(FALSE);
    call MLME_START.request(
                          PAN_ID,               // PANId
                          RADIO_CHANNEL,        // LogicalChannel
                          0,                    // ChannelPage,
                          0,                    // StartTime,
                          BEACON_ORDER,         // BeaconOrder
                          SUPERFRAME_ORDER,     // SuperframeOrder
                          TRUE,                 // PANCoordinator
                          FALSE,                // BatteryLifeExtension
                          FALSE,                // CoordRealignment
                          0,                    // CoordRealignSecurity,
                          0                     // BeaconSecurity
                        );
  }

  event void MLME_START.confirm(ieee154_status_t status) {}

  event void IEEE154TxBeaconPayload.aboutToTransmit() { 
      call Leds.led1Off();
      call Leds.led0On();
  }
  event void IEEE154TxBeaconPayload.setBeaconPayloadDone(void *beaconPayload, uint8_t length) { }

  event void IEEE154TxBeaconPayload.modifyBeaconPayloadDone(uint8_t offset, void *buffer, uint8_t bufferLength) { }

  event void IEEE154TxBeaconPayload.beaconTransmitted() 
  {
    ieee154_macBSN_t beaconSequenceNumber = call MLME_GET.macBSN();
    printf("Sequencia do beacon enviado: %hu ! \n", beaconSequenceNumber);
    call Leds.led0Off();
    call Leds.led1On();
  }  
}
