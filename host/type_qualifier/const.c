/*
 * const.c
 *
 *  Created on: Jul 13, 2026
 *      Author: josab
 */


/*
 * for_loop.c
 *
 *  Created on: Jul 13, 2026
 *      Author: josab
 */

/*
#include<stdio.h>
#include<stdint.h>
void wait_for_user_input();
int main(void)
{
	for(int i =0;i<10;i++)
	{
		if(i%2==0)
		{
		printf("I= %d\t",i);
		}
		else
		{
			printf("I= %d\n",i);
		}
	}
}

void wait_for_user_input()
{
	printf("Please Click on Enter Key to EXIT the program\n");
	while(getchar()!='\n')
	{

	}
	getchar();
}*/
#include<stdio.h>
#include<stdint.h>
void wait_for_user_input();
int main(void)
{
	int32_t const a =10;
	//a =100; throws an error bcz its read only
	int *ptr =(int*)&a;
	*ptr =100;
	printf("%d\n",a);
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

