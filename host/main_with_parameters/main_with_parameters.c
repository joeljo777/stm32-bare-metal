/*
 * main_with_parameters.c
 *
 *  Created on: Jul 31, 2026
 *      Author: josab
 */


#include<stdio.h>
#include<stdlib.h>
void wait_for_usr(void);
int main(int argc, char *argv[])
{
    for(int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    wait_for_usr();
    return 0;
}

void wait_for_usr(void)
{
	printf("Click On Enter to Exit the PROGRAM\n");
	while(getchar()!= '\n')
	{

	}
	getchar();
}
