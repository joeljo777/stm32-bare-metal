/*
 * 16.c
 *
 *  Created on: Oct 26, 2026
 *      Author: josab
 */

#include<stdio.h>
#include<stdint.h>
void wait_for_user(void);
int main()
{

	uint8_t a = 0x1F;
	uint8_t b = 0xF1;
	a ^= b;
	b ^= a;
	a ^= b;
	printf("a= 0x%X\n",a);
	printf("b= 0x%X\n",b);
	return 0;
	}

	void wait_for_user(void)
	{
		printf("Please Click On Enter Key To Exit The Program");
		while(getchar() != '\n')
		{
			//
		}
		getchar();
	}
