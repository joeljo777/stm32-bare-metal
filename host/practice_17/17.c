/*
 * 17.c
 *
 *  Created on: Oct 26, 2026
 *      Author: josab
 */
/*No match

The ~ operator causes integer promotion. Before the NOT is applied, mask is promoted from uint8_t to int.

So ~0x0000000F produces 0xFFFFFFF0 (on a 32-bit system), not 0xF0.

Since 0xFFFFFFF0 != 0xF0, the comparison fails. To get the expected 8-bit result, cast after the NOT:

if ((uint8_t)~mask == 0xF0) // Now matches

Learning:

C always promotes small integer types to int before applying operators like ~.

In firmware, this integer promotion is a common source of comparison bugs when working with 8-bit or 16-bit register values*/
#include<stdio.h>
#include<stdint.h>
void wait_for_user(void);
int main()
{
	uint8_t mask = 0x0F;
	if (~mask == 0xF0) {
	   printf("Match");
	} else {
	   printf("No match");
	}

	/*if ((uint8_t)~mask == 0xF0)    // cast back to 8 bits
//   or
	if ((~mask & 0xFF) == 0xF0)    // mask off upper bits*/
	return 0;
}
void wair_for_user(void)
{
	printf("Click On Enter Key To Exit The Program\n");
	while(getchar() != '\n')
	{
		//
	}
	getchar();
}

