/*
 * 26.c
 *
 *  Created on: Oct 27, 2026
 *      Author: josab
 */


#include<stdio.h>
#include<stdlib.h>
void wait_for_usr(void);
int main()
{
	int arr[2] = {1,2};
	int rr[2];
	for(int i=0;i<2;i++)
	{
			rr[i] = arr[1-i];
	}
	for(int i=0;i<2;i++)
	{
		printf("%d\n",rr[i]);
	}
	return 0;
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
