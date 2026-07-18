/*
 * pointer.c
 *
 *  Created on: Jul 3, 2026
 *      Author: josab
 */
/*
Exercise
1.Create a char type variable and initialize it to value 100
2.Print the address of the above variable.
3.Create a pointer variable and store the address of the above variable
4.Perform read operation on the pointer variable to fetch 1 byte of data from the pointer
5.Print the data obtained from the read operation on the pointer.
6.Perform write operation on the pointer to store the value 65
7.Print the value of the variable defined in step 1*/

#include<stdio.h>
int main(void)
{

	char j =100;
	printf("%p\n",j);
	char* p =&j;
	int data =*p;
	printf("%d\n",data);
	*p = 65;
	printf("%d\n",j);


}
