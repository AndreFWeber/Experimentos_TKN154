README for TestData

Baseado na aplicação TestData de Jan Hauer <hauer@tkn.tu-berlin.de>

Autor/Contato: André Felippe Weber <andrefelippe.weber@gmail.com>


Descrição:

Nesta aplicação um node será programado como uma coordenador de um rede PAN 
802.15.4 com envio de beacons. Este beacon será enviado periodicamente de 
acordo com a variável BEACON_ORDER definida no arquivo app_profile.h de acordo 
com o padrão 802.15.4.

Características de um teste bem sucedido:

O coordenador acenderá seu LED0 (LED vermelho no MICAz) e apagará o LED1 (LED verde no MICAz)
quando um evento IEEE154TxBeaconPayload.aboutToTransmit ocorrer indicando que um frame de beacon
está pronto para ser enviado. O LED0 será apagado e LED1 aceso quando o beacon for enviado. 

Ferramentas: Nenhuma

Uso: 

1. Altere a permissão de acesso às interfaces USB:

    $ sudo chmod 666 /dev/ttyUSB*

2. Instale a aplicação no node coordenador

    $ make micaz install mib510,/dev/ttyUSB0

3. Para realizar o debug da aplicação via serial:

    $ java net.tinyos.tools.PrintfClient -comm serial@/dev/ttyUSB1:57600
	
OBS: A periodicidade de envio dos beacons pode ser alterada modificando o parametro BEACON_ORDER
definida no arquivo app_profile.h.

Known bugs/limitations:

- Many TinyOS 2 platforms do not have a clock that satisfies the
  precision/accuracy requirements of the IEEE 802.15.4 standard (e.g. 
  62.500 Hz, +-40 ppm in the 2.4 GHz band); in this case the MAC timing 
  is not standard compliant


