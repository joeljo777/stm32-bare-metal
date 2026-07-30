/*
 * function_pointers.c
 *
 *  Created on: Jul 30, 2026
 *      Author: josab
 */
/*
 * Reading Complex C Declarations (Clockwise / Spiral Rule)
 *
 * 1. Start at the variable or function name.
 * 2. Move RIGHT whenever possible.
 * 3. If you cannot move right, move LEFT.
 * 4. Continue following the declaration in a clockwise (spiral) direction
 *    until the entire declaration has been interpreted.
 *
 * This rule works for almost all C declarations involving:
 *   - Pointers
 *   - Arrays
 *   - Functions
 *   - Function Pointers
 *   - Combinations of the above
 *
 * Examples:
 *
 *   int *Func(int, int);
 *   -> Func is a function that takes two integers
 *      and returns a pointer to int.
 *
 *   int (*p)(int, int);
 *   -> p is a pointer to a function that takes
 *      two integers and returns an int.
 */

#include<stdio.h>
#include<stdlib.h>
void wait_for_usr(void);
int add(int a, int b)
{
	return a+b;
}
int main(void)
{
	int (*p)(int,int) = &add; // or  int (*p)(int,int) = add
	int c = (*p)(2,3); // or int c = p(2,3);
	printf("%d\n",c);
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
