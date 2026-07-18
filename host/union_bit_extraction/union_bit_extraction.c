/*
 * struct.c
 *
 *  Created on: Jul 15, 2026
 *      Author: josab
 */


/*

    | ADDR_MODE | SHORT_ADDR | LONG_ADDR | SENSOR | BAT | PAYLOAD | STATUS | CRC |
    |-----------|------------|-----------|--------|-----|---------|--------|-----|
    |    1      |     2      |     8     |   3    |  3  |   12    |   1    |  2  |

 */
// Structure definition is created outside the main block(can be inside the main block)

#include <stdio.h>
#include <stdint.h>

void wait_for_user_input();

union Packet
{
	uint32_t packet_value;
	struct
	{
		uint32_t CRC			:2;
		// uint32_t CRC			:2; here :2 is bit field specifying only 2bit should be used
		uint32_t STATUS			:1;
		uint32_t PAYLOAD		:12;
		uint32_t BAT			:3;
		uint32_t SENSOR 		:3;
		uint32_t LONG_ADDRESS	:8;
		uint32_t SHORT_ADDRESS	:2;
		uint32_t ADDR_MODE		:1;
	}packeytfields;
};
int main(void)
{
    union Packet packet;

    printf("Enter the 32 Bit Packet Value : \n");
    fflush(stdout);

    scanf("%X", &packet.packet_value);




    printf("\nDecoded Packet\n");
    printf("----------------------------\n");

    printf("CRC            : %#x\n", packet.packeytfields.CRC);
    printf("STATUS         : %#x\n", packet.packeytfields.STATUS);
    printf("PAYLOAD        : %#x\n", packet.packeytfields.PAYLOAD);
    printf("BAT            : %#x\n", packet.packeytfields.BAT);
    printf("SENSOR         : %#x\n", packet.packeytfields.SENSOR);
    printf("LONG_ADDRESS   : %#x\n", packet.packeytfields.LONG_ADDRESS);
    printf("SHORT_ADDRESS  : %#x\n", packet.packeytfields.SHORT_ADDRESS);
    printf("ADDR_MODE      : %#x\n", packet.packeytfields.ADDR_MODE);
    printf("SIze of struct : %d\n",sizeof(packet));
    wait_for_user_input();

    return 0;
}

void wait_for_user_input()
{
    printf("Please Click on Enter Key to EXIT the program\n");

    while(getchar() != '\n')
    {

    }

    getchar();
}
