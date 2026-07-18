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

	char s[] ="hello"; //string definition , the complier adds the the null character('\0') at the end
	//char s[] ={'h','e','l', 'l','o','\0'}; //string definition
	printf("%d\n",sizeof(s)); //6 because it counts null character
	printf("%d\n",strlen(s)); //5 because it doesn't count null character
   /*
    char s[] = "h"; its a string
    char s ='h'; its not a string
    * */

/*	char *s ="hello";  this is valid as compiler allocates
	some memory address to the string and stores it in ROM (so only read)
	so s[0] ="l"; is wrong */
	//but
	char s1[] ="hello";
	s1[0]="j";// this is correct


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

