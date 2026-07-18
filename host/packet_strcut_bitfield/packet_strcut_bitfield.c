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
// Structure definition is created outside the main block(can be inside the main bloak)

#include <stdio.h>
#include <stdint.h>

void wait_for_user_input();

struct Packet
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
};

int main(void)
{
    uint32_t packet_value;

    printf("Enter the 32 Bit Packet Value : \n");
    fflush(stdout);

    scanf("%X", &packet_value);

    struct Packet packet;
    /*
     * Extract the required bits from the 32-bit packet.
     *
     * Field = (packet_value >> Starting Bit Position) & Bit Mask
     */

    packet.CRC            = (uint8_t)( packet_value        & 0x3);
    packet.STATUS         = (uint8_t)((packet_value >> 2)  & 0x1);
    packet.PAYLOAD        = (uint16_t)((packet_value >> 3) & 0xFFF);
    packet.BAT            = (uint8_t)((packet_value >> 15) & 0x7);
    packet.SENSOR         = (uint8_t)((packet_value >> 18) & 0x7);
    packet.LONG_ADDRESS   = (uint8_t)((packet_value >> 21) & 0xFF);
    packet.SHORT_ADDRESS  = (uint8_t)((packet_value >> 29) & 0x3);
    packet.ADDR_MODE      = (uint8_t)((packet_value >> 31) & 0x1);


    printf("\nDecoded Packet\n");
    printf("----------------------------\n");

    printf("CRC            : %#x\n", packet.CRC);
    printf("STATUS         : %#x\n", packet.STATUS);
    printf("PAYLOAD        : %#x\n", packet.PAYLOAD);
    printf("BAT            : %#x\n", packet.BAT);
    printf("SENSOR         : %#x\n", packet.SENSOR);
    printf("LONG_ADDRESS   : %#x\n", packet.LONG_ADDRESS);
    printf("SHORT_ADDRESS  : %#x\n", packet.SHORT_ADDRESS);
    printf("ADDR_MODE      : %#x\n", packet.ADDR_MODE);
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
