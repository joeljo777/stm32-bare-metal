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
typedef struct
{
    int id;
    char grade;
} Student;
int main(void)
{
	Student s1;

	    s1.id = 101;
	    s1.grade = 'A';

	    printf("ID    = %d\n", s1.id);
	    printf("Grade = %c\n", s1.grade);

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
