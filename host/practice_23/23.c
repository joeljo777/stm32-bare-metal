/*
 * 23.c
 *
 *  Created on: Oct 27, 2026
 *      Author: josab
 */

#include<stdio.h>
void wait_for_user(void);
int main()
{

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


