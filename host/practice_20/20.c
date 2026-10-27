/*
 * 20.c
 *
 *  Created on: Oct 27, 2026
 *      Author: josab
 */
/*Sum of even - sum of odd indexes */
#include<stdio.h>
void wait_for_user(void);
int main()
{
	int odd_sum=0;
	int even_sum = 0;
	int a[5]= {1,2,3,4,5};
	for(int i= 0;i<5;i++)
	{
		if(i%2 !=0)
		{
			odd_sum += a[i];
		}
		else
		{
			even_sum += a[i];
		}
	}
	printf("Even_sum = %d\n",even_sum);
	printf("Odd_sum = %d\n",odd_sum);
	printf("Difference =%d", even_sum - odd_sum);
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

