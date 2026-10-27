/*
 * 24.c
 *
 *  Created on: Oct 27, 2026
 *      Author: josab
 */


#include<stdio.h>
void wait_for_user(void);
int main()
{
	int arr[8] = {1,2,3,4,5,6,7};
	int x= 12;
	int totalpair = 0;
	for(int i=0;i<8;i++)
	{
		for(int j =i+1 ;j<8;j++)
		{
			for(int k =j+1 ;k<8;k++)
			{
				if(arr[i]+arr[j]+arr[k]==x)
							{
								totalpair++;
								printf("pair = (%d, %d, %d)\n",arr[i],arr[j], arr[k]);
							}
			}
		}
	}
	printf("%d",totalpair);
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
