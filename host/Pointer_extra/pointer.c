/*
 * pointer.c
 *
 *  Created on: Jul 23, 2026
 *      Author: josab
 */
#include<stdio.h>
#include<stdint.h>
void wait_for_user();
int main(void)
{

	int a =10;
	int*p = &a;
	printf("&a =%d",&a);
	printf("p = %p, *p =%d\n",p,*p);
	int **q =&p;
	printf("q   = %p\n",(void*)q);
	printf("*q  = %p\n",(void*)*q);
	printf("**q = %d\n",**q);
	wait_for_user();
}
void wait_for_user()
{
	while(getchar() != '\n')
	{

	}
	getchar();
}


