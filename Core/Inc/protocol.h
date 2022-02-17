#ifndef INC_PROTOCOL_H_
#define INC_PROTOCOL_H_

#include "stdio.h"

//#define EXAMPLE_TX
#define EXAMPLE_RX

#define MAC_ADDRESS_SIZE 8

#define TX_TIMEOUT_COUNT 100

#define PACKET_HEAD_SIZE 13
#define PAYLOAD_SIZE 115

typedef enum {

	RADIO_INIT_WAIT = 0x00, RADIO_INIT_SUCCESS

} RADIO_INIT;

typedef union {

	struct {

		uint8_t company_id[2];
		uint8_t device_id[2];
		uint8_t mac_address[8];
		uint8_t control_number;
		uint8_t paylaod[115];

	} Packet;

	uint8_t buffer[128];

} radio_packet_protocol_t;

#endif /* INC_PROTOCOL_H_ */
