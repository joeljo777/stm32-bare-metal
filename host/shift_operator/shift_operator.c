/*
 * shift_operator.c
 *
 *  Created on: Jul 13, 2026
 *      Author: josab
 */

#include<stdio.h>
#include<stdint.h>
int main(void)
{
	//each number here is 4 bits so shift four time is sane as 1 shift
	uint32_t a =0x0010;
	uint32_t b = a>>4; //right shift
	printf("%d\n",b);
    uint16_t v = 0x08;
    printf("%d\n", v << 4);
    uint16_t output =(uint8_t)( (0x003F)& (0xB410>>9));
    printf("Output = %u\n",output);
}
