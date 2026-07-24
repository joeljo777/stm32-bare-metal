/*
 * call_by_refernce.c
 *
 *  Created on: Jul 24, 2026
 *      Author: josab
 */

#include<stdio.h>
#include<stdint.h>
void wait_for_user();
void incr(int *p)
{
	*p = (*p)+1;
}
int main(void)
{

	int a = 100;
	incr(&a);
	printf("%d",a);
	wait_for_user();
}

void wait_for_user()
{
	while(getchar() != '\n')
	{

	}
	getchar();
}


