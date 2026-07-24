/*
 * array_and_pointers.c
 *
 *  Created on: Jul 24, 2026
 *      Author: josab
 */


#include<stdio.h>
#include<stdint.h>
void wait_for_user();
int main(void)
{

	int A[] ={1,2,3,4};
	printf(" A = %#x\n",A);
	printf("&A = %#x\n", &A[0]);
	printf(" *A = %d\n",*A);
	printf(" A[0] = %d\n",A[0]);
	wait_for_user();
}

void wait_for_user()
{
	while(getchar() != '\n')
	{

	}
	getchar();
}
