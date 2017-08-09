/* 
 * Copyright (c) 2008, Technische Universitaet Berlin
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - Neither the name of the Technische Universitaet Berlin nor the names
 *   of its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * - Revision -------------------------------------------------------------
 * $Revision: 1.2 $
 * $Date: 2010-01-05 17:12:56 $
 * @author: Jan Hauer <hauer@tkn.tu-berlin.de>
 * ========================================================================
 *
 *
 * Modificado em 25/07/2017 por André Felippe Weber
 *
 * Para debugar via serial basta aplicar o seguinte comando no terminal:
 *
 * java net.tinyos.tools.PrintfClient -comm serial@/dev/ttyUSB1:57600
 *
 */

#include "TKN154.h"
#include "app_profile.h"
#include "printf.h"

module RespondeBeaconsP
{
  uses {
    interface Boot;
    interface MCPS_DATA;
    interface MLME_RESET;
    interface MLME_SET;
    interface MLME_GET;
    interface MLME_ASSOCIATE;
    interface MLME_DISASSOCIATE;
    interface MLME_COMM_STATUS;
    interface IEEE154Frame as Frame;
    interface Leds;
    interface Packet;
  }
} implementation {

  message_t m_frame;
  uint8_t m_payloadLen;
  ieee154_PANDescriptor_t m_PANDescriptor;
  bool m_ledCount;
  ieee154_CapabilityInformation_t m_capabilityInformation;

  void startApp();
  task void packetSendTask();


  event void Boot.booted() {
    char payload[] = "Hello Coordinator!";
    uint8_t *payloadRegion;

    m_capabilityInformation.AlternatePANCoordinator = 0;
    m_capabilityInformation.DeviceType = 0;
    m_capabilityInformation.PowerSource = 0;
    m_capabilityInformation.ReceiverOnWhenIdle = 0;
    m_capabilityInformation.Reserved = 0;
    m_capabilityInformation.SecurityCapability = 0;
    m_capabilityInformation.AllocateAddress = 1;    

    m_payloadLen = strlen(payload);
    payloadRegion = call Packet.getPayload(&m_frame, m_payloadLen);
    if (m_payloadLen <= call Packet.maxPayloadLength()){
      memcpy(payloadRegion, payload, m_payloadLen);
      call MLME_RESET.request(TRUE);
    }
  }

  event void MLME_RESET.confirm(ieee154_status_t status)
  {
    if (status == IEEE154_SUCCESS)
      startApp();
  }

  void startApp()
  {
    ieee154_address_t coordAdr;

    coordAdr.shortAddress = COORDINATOR_ADDRESS;
    call MLME_SET.phyCurrentChannel(RADIO_CHANNEL);
    call MLME_SET.macAutoRequest(FALSE);
    call MLME_SET.macPANId(PAN_ID);
    call MLME_SET.macCoordShortAddress(COORDINATOR_ADDRESS);
    call MLME_ASSOCIATE.request(
          RADIO_CHANNEL,
          call MLME_GET.phyCurrentPage(),
          ADDR_MODE_SHORT_ADDRESS,
          PAN_ID,
          coordAdr,
          m_capabilityInformation,
          NULL  // security
          );    
  }

  event void MLME_ASSOCIATE.confirm    (
                          uint16_t AssocShortAddress,
                          uint8_t status,
                          ieee154_security_t *security
                        )
  {
    if ( status == IEEE154_SUCCESS ){
      call Leds.led1On();

      call Frame.setAddressingFields(
          &m_frame,                
          ADDR_MODE_SHORT_ADDRESS,        // SrcAddrMode,
          ADDR_MODE_SHORT_ADDRESS,        // DstAddrMode,
          m_PANDescriptor.CoordPANId,     // DstPANId,
          &m_PANDescriptor.CoordAddress,  // DstAddr,
          NULL                            // security
          );
      post packetSendTask(); 

    } else {
      call Leds.led0On();
      startApp(); // retry
    }
  }

  event void MLME_DISASSOCIATE.confirm    (
                          ieee154_status_t status,
                          uint8_t DeviceAddrMode,
                          uint16_t DevicePANID,
                          ieee154_address_t DeviceAddress
                        )
  {
    if (status == IEEE154_SUCCESS){
      call Leds.led1Off();
    } 
  }

  event void MLME_ASSOCIATE.indication (
                          uint64_t DeviceAddress,
                          ieee154_CapabilityInformation_t CapabilityInformation,
                          ieee154_security_t *security
                        ){}  

  event void MLME_DISASSOCIATE.indication (
                          uint64_t DeviceAddress,
                          ieee154_disassociation_reason_t DisassociateReason,
                          ieee154_security_t *security
                        ){}


  event void MLME_COMM_STATUS.indication (
                          uint16_t PANId,
                          uint8_t SrcAddrMode,
                          ieee154_address_t SrcAddr,
                          uint8_t DstAddrMode,
                          ieee154_address_t DstAddr,
                          ieee154_status_t status,
                          ieee154_security_t *security
                        ) {}


//*************************DADOS*********************************
  task void packetSendTask()
  {

    ieee154_address_t coordAdr;

    coordAdr.shortAddress = COORDINATOR_ADDRESS;
    call Frame.setAddressingFields(
                          &m_frame,                
                          ADDR_MODE_SHORT_ADDRESS,     // SrcAddrMode,
                          ADDR_MODE_SHORT_ADDRESS,     // DstAddrMode,
                          PAN_ID,                      // DstPANId,
                          &coordAdr,              	// DstAddr,
                          NULL                         // security
                        );

       if (call MCPS_DATA.request  (
          &m_frame,                         // frame,
          m_payloadLen,                     // payloadLength,
          0,                                // msduHandle,
          TX_OPTIONS_ACK // TxOptions,
          ) != IEEE154_SUCCESS)
      		call Leds.led0On();
	else{
		//printf("Frame enviado com sucesso! Conteúdo da mensagem: %s ! \n", call Frame.getPayload(&m_frame));
		//call Leds.led2Toggle();
	} 
 }

  event void MCPS_DATA.confirm    (
                          message_t *msg,
                          uint8_t msduHandle,
                          ieee154_status_t status,
                          uint32_t timestamp
                        )
  {
    if (status == IEEE154_SUCCESS && m_ledCount++ >= 20) {
      m_ledCount = 0;
      call Leds.led2Toggle();
    }
    call Leds.led0Toggle();
    post packetSendTask(); 
  }


  event message_t* MCPS_DATA.indication (message_t* frame)
  {
    // we don't expect data
    return frame;
  }

}
