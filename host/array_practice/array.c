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
void print(char *c)
{
	while (*c !='\0')
	{
		printf("%c",*c);
		c++;
	}
	printf("\n");
}
int main(void)
{
	char c[] = "Hello";
	// also can be used as a string literal char *c ="Hello"; but not write able , it is stored as constant
	print(c);
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
