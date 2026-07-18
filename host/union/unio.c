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

union address
{
	uint16_t shortAddr;
	uint32_t longAddr;
};

int main(void)
{

	union address addr;
	addr.shortAddr =0xABCD;
	addr.longAddr =0xEEEECCCC;
    /*since UNIONS is used when there is mutual exclusion , addr.longAddr =0xEEEECCCC; OVERWRITES addr.longAddr =0xEEEECCCC;
	 that's why output is
	Short Address : 0XCCCC
	Long Address : 0XEEEECCCC
	and not
	Short Address : 0XABCD
	Long Address : 0XEEEECCCC
	*/
	printf("Short Address : %#X\n",addr.shortAddr);
	printf("Long Address : %#X\n",addr.longAddr);
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
