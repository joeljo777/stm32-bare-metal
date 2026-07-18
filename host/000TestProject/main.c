/*
 * main.c
 *
 *  Created on: Jun 1, 2026
 *      Author: josab
 */


#include<stdio.h>
int a();
int z;
int main()
{
	for(int i=0; i<10;i++)
	{
		a();
	}
	printf("Press 'Enter' to exit the application \n");
	getchar();
	return 0;
}
int  a()
{
	static unsigned int  x=0;
	x=z;
	x=x+1;
	printf("X=%d\n",x);
	return 0;
}




