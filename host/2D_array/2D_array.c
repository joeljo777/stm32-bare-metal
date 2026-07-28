/*
 * array.c
 *
 *  Created on: Jul 28, 2026
 *      Author: josab
 */


#include<stdio.h>
#include<stdint.h>
#include<string.h>
void wait_for_usr(void);

int main(void)
{
	int a[2][3]= { {1,2,3} ,
				   {4,5,6} };
	printf("%d\n",*(*a+1));
	printf("a[0] =%d\n",a[0]);

	for(int i =0;i<2;i++)
	{
		for(int j =0;j<3;j++)
		{
			printf("%d->\t",a[i][j]);
			printf("%d\t",&a[i][j]);
		}
		printf("\n");
	}

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
