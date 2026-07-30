/*
 * calloc.c
 *
 *  Created on: Jul 30, 2026
 *      Author: josab
 */


#include<stdio.h>
#include<stdlib.h>
void wait_for_usr(void);
int main(void)
{
	float *p = (float*)calloc(3,sizeof(float));
	*p = 0.0;
	p[1]=0.1;
	p[2]=0.2;
	for(int i=0;i<3;i++)
	{
		printf(" P[%d] = %0.2f\t ",i,p[i]);
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
