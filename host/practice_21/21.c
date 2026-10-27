/*
 * 21.c
 *
 *  Created on: Oct 27, 2026
 *      Author: josab
 */

#include<stdio.h>
void wait_for_user(void);
int main()
{
int a[5] = {1,2,3,4,5};
int sum[5] = {0,0,0,0,0};
sum[0] = a[0];
for(int i = 1; i < 5; i++)
{
    sum[i] = sum[i - 1] + a[i];
}

    for(int i = 0; i < 5; i++)
    {
        printf("Sum[%d] = %d\t", i, sum[i]);
    }

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


