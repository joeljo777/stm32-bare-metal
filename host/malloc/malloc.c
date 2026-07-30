/*
 * malloc.c
 *
 *  Created on: Jul 30, 2026
 *      Author: josab
 */


#include<stdio.h>
#include<stdlib.h>
void wait_for_usr(void);
int main(void)
{
	int *p =(int*) malloc(3*sizeof(int));
	*p =10;  // or p[0]= 100;
	p[1]=20;
	p[2]=30;
	for(int i=0;i<3;i++)
	{
		printf("P[%d] = %d\t",i,p[i]);
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
