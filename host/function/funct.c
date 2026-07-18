/*
 * funct.c
 *
 *  Created on: Jun 8, 2026
 *      Author: josab
 */


#include<stdio.h>
int add(int a, int b);
int main()
{
	int result;
	result = add(1,2); // whenever we are returning some value we have to follow this
	printf("In Main Function before calling function\n");
	printf("result = %d\n",result);
	printf("In Main Function after calling function\n");
}

int add(int a, int b)
{
	int c = a+b;
	printf("In add Function before calling function\n");
	printf("Sum of %d + %d =%d\n",a,b,c);
	printf("In add Function after calling function\n");
	return c;
}
