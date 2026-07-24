/*
 * array_as_function_arguments.c
 *
 *  Created on: Jul 24, 2026
 *      Author: josab
 */



#include<stdio.h>
#include<stdint.h>
void wait_for_user();
int sum(int A[],int size)
{
	int sum =0;
	for(int i =0;i<size;i++)
	{
		A[i] = 2*A[i];

	}
	return sum;
}
int main(void)
{
	//compiler does take array as in pointer when passed as argument it takes it as a pointer so
	// size cannot be defined in "sum" function
	int A[] = {1,2,3,4,5};
	int size = sizeof(A)/sizeof(A[0]);
	int t= sum(A,size);
	printf("Sum = %d\n",t);
	printf("Press ENTER Key to exit the PROGRAM ");
	wait_for_user();
}

void wait_for_user()
{
	while(getchar() != '\n')
	{

	}
	getchar();
}
