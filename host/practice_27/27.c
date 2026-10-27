/*
 * 27.c
 *
 *  Created on: Oct 27, 2026
 *      Author: josab
 */

#include<stdio.h>
#include<stdlib.h>
void wait_for_usr(void);
void reverse(int arr[])
{
	int i=0;
	int j =6;
	while(i<=j)
	{
		int temp =arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}
int main()
{
	int arr[7] = {1,2,3,4,5,6,7};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n",size);
	reverse(arr);
	for(int k= 0;k<=6;k++)
	{
		printf("arr[%d] = %d\n",k,arr[k]);
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

