/*
 * bitwise.c
 *
 *  Created on: Jul 10, 2026
 *      Author: josab
 */


#include<stdio.h>
#include<stdint.h>
int main(void)
{
	int a ,b ;
	printf("Enter a and b : \n");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("Testing of bits\n");
	printf("a | b = %d\n",a|b);
	printf("a & b = %d\n",a&b);
	printf("~a = %d\n",~a);
	printf("~b = %d\n",~b);
	printf("a ^ b = %d\n",a^b);
	printf("a<<b = %d\n",a<<b);
	printf("a>>b = %d\n",a>>b);
	printf("size of %d : %d\n",a,sizeof(a));
	if((a & 1 )==0)
	{
		printf("%d is even\n",a);
	}
	else
	{
		printf("%d is odd\n",b);
	}
	printf("Setting of bits\n");
	printf("4th and 7th bit are set and = %d\n",a |72);
	printf("Clearing of bits\n");
	printf("4th and 7th bit are cleared to = %d\n",a &0xC9);
	printf("Toggling of bits\n");
	int a_toggle =a;
	a_toggle = a_toggle ^0x01;
	int b_toggle =b;
	b_toggle = b_toggle ^0x01;
	for(int i =1;i<=10;i++)
	{
		if(i&1)
		{
			printf("Toggling of a =%d\n", a_toggle);
		}
		else
		{
			printf("Toggling of b =%d\n", b_toggle);
		}
	}
	printf("\n");
	printf("Click on ENTER key to exit\n");
	while(getchar()!= '\n')
	{

	}
	getchar();

}
