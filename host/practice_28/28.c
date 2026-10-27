/*
 * 28.c
 *
 *  Created on: Oct 27, 2026
 *      Author: josab
 */


/*
 * 27.c
 *
 *  Created on: Oct 27, 2026
 *      Author: josab
 */

#include<stdio.h>
#include<stdlib.h>
void wait_for_usr(void);
void reverse(int arr[],int a,int b)
{

	for(int i =a, j =b;i<=j; i++,j--)
	{
		int temp =arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
int main()
{
	int arr[7] = {1,2,3,4,5,6,7};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n",size);
	int i =0, k= 2;
	int n =7;
	k = k%7;

	reverse(arr, i ,n-1);
	reverse(arr, i ,k-1);
	reverse(arr, k ,n-1);
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


