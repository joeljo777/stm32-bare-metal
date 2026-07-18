/*
 * while_loop.c
 *
 *  Created on: Jul 13, 2026
 *      Author: josab
 */
#include<stdio.h>
#include<stdint.h>
void wait_for_user_input();
int main(void)
{
	/*uint8_t a =1;
	while( a <=10) //means until condition is False the loop runs
	{

		printf("%d\n",a);
		a++;
	}*/
	uint32_t start ,end;
	uint32_t even =0;
	printf("Enter start and end numbers\n");
	fflush(stdout);
	scanf("%d %d",&start,&end);
	if(end<start)
	{
		printf("End should be greater than start\n");
	}
	else
	{
	while(start<=end)
	{
		if(!(start%2))
		{
			printf("Even no %d\t",start);
			even++;
		}
		start++;
	}}
	printf("Total even number = %d\n",even);
	wait_for_user_input();
}

void wait_for_user_input()
{
	printf("Please Click on Enter Key to EXIT the program\n");
	while(getchar()!='\n')
	{

	}
	getchar();
}

