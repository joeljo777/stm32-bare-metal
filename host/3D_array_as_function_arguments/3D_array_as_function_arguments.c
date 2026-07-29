/*
 * 3D_array_as_function_arguments.c
 *
 *  Created on: Jul 29, 2026
 *      Author: josab
 */


#include<stdio.h>
#include<stdint.h>
#include<string.h>
void wait_for_usr(void);
void func(int *c[][2][2])
{
	printf("%d\n", c[1][1][1]);
}

int main(void)
{
	int c[3][2][2] = {
						{{2,5},{7,9}},
						{{3,4},{6,1}},
						{{0,8},{11,13}}
					 };
	func(c);
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
