/*
 * string.c
 *
 *  Created on: Jul 17, 2026
 *      Author: josab
 */
#include <stdio.h>
#include <stdint.h>
#include<string.h>
void wait_for_user_input(void);

int main(void)
{

    char s[50] ;
    printf("Enter your name \n");
    fflush(stdout);
    //[^\n] is scanset that allows thw compiler to continue until it  meets the particular ( in this \n)
    scanf("%[^\n]s\n",s);
    printf("%s\n",s);
    wait_for_user_input();

    return 0;
}




void wait_for_user_input(void)
{
    printf("Please Click on Enter Key to EXIT the program\n");

    while(getchar() != '\n')
    {

    }

    getchar();
}

