/*
 * heap.c
 *
 *  Created on: Jul 29, 2026
 *      Author: josab
 */

#include<stdio.h>
#include<stdlib.h>
void wait_for_usr(void);
int main(void)
{
	int a ; //goes to stack;
	int *p;
	if (p == NULL)
	{
		p =malloc(sizeof(int));
		*p =10;
		printf("value : %d at address %#x before freeing the heap\n",*p,p);
		free(p);

		p =malloc(sizeof(int));
		*p =20;
		printf("value : %d at address %#x after freeing the heap\n",*p,p);
		}
	else
	{

	}

	/*
	 value : 10 at address 8081240 before freeing the heap
	 value : 20 at address 8081240 after freeing the heap
	 */
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

