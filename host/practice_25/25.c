/*
 * 25.c
 *
 *  Created on: Oct 27, 2026
 *      Author: josab
 */


#include<stdio.h>
void wait_for_user(void);
int main()
{
	int arr[5] = {25, 10, 25, 1, 12};
	int max ,smax;
	max = arr[0];
	for(int i=0;i<5;i++)
	{

		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	int j = 0;

	while (j < 5 && arr[j] == max)
	{
	    j++;
	}

	if (j < 5)
	{
	    smax = arr[j];

	    for (int j = 0; j < 5; j++)
	    {
	        if (arr[j] < max && arr[j] > smax)
	        {
	            smax = arr[j];
	        }
	    }

	}
	else
	{
	    printf("No second distinct maximum exists.\n");
	}
	printf(" max =%d\t, smax = %d\n", max,smax);
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
