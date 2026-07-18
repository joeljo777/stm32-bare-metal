/*
 * struct.c
 *
 *  Created on: Jul 15, 2026
 *      Author: josab
 */

// Structure definition is created outside the main block(can be inside the main bloak)
#include<stdio.h>
#include<stdint.h>
void wait_for_user_input();
struct Dataset
{
	char data1;
	int data2;
	char data3;
	short data4;
};
void display_Elements(struct Dataset *ptr);
int main(void)
{

	struct Dataset data;

	data.data1 =0x11;
	data.data2 =0xFFFFEEEE;
	data.data3 =0x22;
	data.data4 =0xABCD;

	/*struct Dataset *ptr;

	ptr =&data;

	ptr ->data1 =5;*/



	display_Elements(&data);

	wait_for_user_input();
}
void wait_for_user_input()
{
	printf("Please Click on Enter Key to EXIT the program\n");
	while(getchar()!='\n')
	{

	}
	getchar();
}

void display_Elements(struct Dataset *ptr)
{

	//this is pass by reference so arrow operator else dot operator for pass by value
	printf("%X\n",ptr->data1);
	printf("%X\n",ptr->data2);
	printf("%X\n",ptr->data3);
	printf("%X\n",ptr->data4);

}
