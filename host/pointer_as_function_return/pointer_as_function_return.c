/*
 * pointer_as_function_return.c
 *
 *  Created on: Jul 30, 2026
 *      Author: josab
 */
/*
 * Address of a in main function =6422296
	Address of b in main function= 6422292
	Address of a in add function = 6422296
	Address of b in add function = 6422292
 */

#include<stdio.h>
#include<stdlib.h>
void wait_for_usr(void);

int *add(int *a,int*b)
{
	printf("Address of a in add function = %p\n",a);
	printf("Address of b in add function = %p\n",b);
	int *c =(int*)malloc(sizeof(int));
    *c = (*a)+ (*b);
	 return c;
}
int main(void)
{
	int a =10, b=20;
	printf("Address of a in main function =%p\n",&a);
	printf("Address of b in main function= %p\n",&b);
	int *ptr = add(&a,&b);
	printf("%d",*ptr);
	free(ptr);
	ptr =NULL;
	printf("\n");
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
