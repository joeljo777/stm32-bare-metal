/*
 * malloc_alloc_realloc.c
 *
 *  Created on: Jul 30, 2026
 *      Author: josab
 */

#include<stdio.h>
#include<stdlib.h>
void wait_for_usr(void);
int main(void)
{
	int n;
	printf("Enter the size of the array\n");
	fflush(stdout);
	scanf("%d",&n);
	printf("malloc\n");
	int *A =(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		A[i]=i+1;
	}
	//free(A);

	for(int i=0;i<n;i++)
	{
		printf("A[%d] = %d\t",i,A[i]);
	}
	printf("\n");
	printf("calloc\n");
	int *B=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		B[i]=i+1;
	}
	for(int i=0;i<n;i++)
	{
		printf("B[%d] = %d\t", i,B[i]);
	}
	printf("\n");
	int *C =(int*)realloc(A,2*n*sizeof(int));
	/*int *C =(int*)realloc(A,0); is same as free(A);
	//int *C =(int*)realloc(NULL,n*sizeof(int); is same as malloc;

	 */
	printf("Relloc\n");
	printf("Previous address = %d, New Address =%d\n",A,C);
	for(int i=0;i<2*n;i++)
	{
		printf("C[%d] = %d\t",i,C[i]);
	}
	printf("\n");

	wait_for_usr();
}

void wait_for_usr(void)
{
	printf("Click On Enter to Exit the PROGRAM\n");
	while(getchar()!= '\n')
	{

	}
	getchar();
}
