/*
 * do_while.c
 *
 *  Created on: Jul 13, 2026
 *      Author: josab
 */


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
	int8_t a =10;
	// execute statement until exp==False but first execute and then check the  exp
	do
	{
		printf("a = %d\n",a);
		a--;
	}
	while(a<=0);
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

