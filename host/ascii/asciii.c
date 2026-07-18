/*
 * asciii.c
 *
 *  Created on: Jul 3, 2026
 *      Author: josab
 */


#include<stdio.h>
int main(void)
{
	char a, b, c, d, e, f;

	    /*printf("Enter a, b, c, d, e, f:\n");
	    fflush(stdout);

	    // Exactly 6 format specifiers for 6 variables
	    scanf("%c %c %c %c %c %", &a, &b, &c, &d, &e, &f);

	    // Added 6 format specifiers to actually display the values
	    printf("Values = %d, %d, %d, %d, %d, %d", a, b, c, d, e, f);*/
	printf("Enter a Character");
	fflush(stdout);
	a =getchar();
	printf("a= %d",a);
	while(getchar()!='\n')
	{

	}
	getchar();
}
