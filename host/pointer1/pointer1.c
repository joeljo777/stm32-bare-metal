/*
 * pointer1.c
 *
 *  Created on: Jul 3, 2026
 *      Author: josab
 */


#include<stdio.h>
long long int a =0x123456783421;
int main(void)
{
	short *p =(short*)&a;
	printf("The value at address %p is : %x\n",p,*p);

	p =p+1;
	printf("The value at address %p is : %x\n",p,*p);


}
