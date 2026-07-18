/*
 * operator.c
 *
 *  Created on: Jul 4, 2026
 *      Author: josab
 */


#include<stdio.h>
#include<stdint.h>
int main(void)
{
	uint32_t value = 2+3*4;
	printf("2+3*4 = %d\n",value);
	uint32_t value1 = (2+3)*4;
	printf("(2+3)*4 = %d\n",value1);
	double value2 = 2/3*4;
	printf("2/3*4 = %lf\n",value2);
	  uint32_t x =5;
	   x++;
	   printf("x++ = %d\n",x);
	   uint32_t y = ++x;
	   printf("y = %d\n",y);
	   printf("!x = %d\n",!(!x));
	   if(x==55);
       printf("sdfbweivo\n");
	   printf("!x = %d",!(!x));

}
