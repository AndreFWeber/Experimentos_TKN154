#include "app_profile.h"

configuration EnviaBeaconsC
{
} implementation {
  components MainC;
  components LedsC;
  components Ieee802154BeaconEnabledC as MAC;
  components PrintfC;
  components SerialStartC;
  components EnviaBeaconsP as App;

  MainC.Boot <- App;
  App.Leds -> LedsC;
  App.MLME_START -> MAC;
  App.MLME_RESET -> MAC;
  App.MLME_SET -> MAC;
  App.MLME_GET -> MAC;
  App.IEEE154TxBeaconPayload -> MAC;
}
