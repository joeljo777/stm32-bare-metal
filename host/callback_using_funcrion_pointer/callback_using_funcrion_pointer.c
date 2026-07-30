/*
 * callback_using_funcrion_pointer.c
 *
 *  Created on: Jul 30, 2026
 *      Author: josab
 */


#include<stdio.h>
#include<stdlib.h>
void wait_for_usr(void);
int A()
{
	printf("Hello\n");
}
int B( void(*ptr)()) //function pointer as argument
{
	ptr(); // call back function that "ptr" points to
}
int main(void)
{
	void (*p)() = A;  // &A is not written
	//bcz function name automatically decays into its address, just like an array name.
	B(p);
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
