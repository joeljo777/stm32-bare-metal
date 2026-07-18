/*
 * conditional.c
 *
 *  Created on: Jul 4, 2026
 *      Author: josab
 */


#include<stdio.h>
#include<stdint.h>
int main(void)
{
	uint32_t x ,y;
	printf("Enter the values of x and y\n");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	int a = (x>y)?x:y;
	printf("%d is bigger\n",a);
	printf("Click on ENTER key to exit\n");
	while(getchar()!= '\n')
	{

	}
	getchar();
}
