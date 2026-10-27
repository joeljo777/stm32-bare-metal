/*
 * 22.c
 *
 *  Created on: Oct 27, 2026
 *      Author: josab
 */

#include<stdio.h>
void wait_for_user(void);
int main()
{
int a[5] = {1,2,3,4,5};
for(int i = 0;i<5;i++)
{
	if(i%2 != 0)
	{
		a[i] = a[i] *2;
	}
	else
	{
		a[i] = a[i]+10;
	}
}
for(int i = 0;i<5;i++)
{
	printf("a[%d] =%d\t",i,a[i]);
}
printf("\n");
wait_for_user();
	return 0;
}
void wait_for_user(void)
{
	printf("Click On Enter Key To EXit The Program\n");
	while( getchar() != '\n')
	{
		//
	}
	getchar();
}

