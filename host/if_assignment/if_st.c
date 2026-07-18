/*
 * if_st.c
 *
 *  Created on: Jul 4, 2026
 *      Author: josab
 */

#include<stdio.h>
#include<stdint.h>
int main(void) {
	int age = 0;
	printf("Please Enter your AGE\n");
	fflush(stdout);
	scanf("%d", &age);
	if (age >= 18) {
		printf("Your are legally eligible to cast vote\n");
	} else {
		printf("Your are not legally eligible to cast vote\n");
	}

	float x, y;
	printf("Enter the value of x and y : ");
	fflush(stdout);
	if(scanf("%f %f", &x, &y) == 1)
	{
	int num1 =x;
	int num2 =y;
	if((num1!=x )|| num2!=y )
	{
		printf("Warning ! you have entered real numbers\n");

		if(num1>num2)
		{
			printf("%d is greater than %d\n",num1,num2);
		}
		else
		{
			if(num1<num2)
			{
				printf("%d is less than %d\n",num1,num2);
			}
			else
			{
				printf("%d is equal to %d\n",num1,num2);
			}
		}
	}}
	else
	{
		printf("hell na brother , enter a number \n");
	}
		printf("Click on ENTER key to exit the program\n");
		while (getchar() != '\n')
		{

		}

		getchar();
	}

