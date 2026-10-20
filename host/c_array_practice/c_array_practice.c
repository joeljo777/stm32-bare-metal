/*
 * c_array_practice.c
 *
 *  Created on: Oct 20, 2026
 *      Author: josab
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_user(void);

int main()
{

    printf("Array Traversal \n");
    int ar[3] = {5, 6, 1};


    for(int a = 0; a < 3; a++)
    {
        printf("ar[%d] = %d\t", a, ar[a]);
    }

    printf("\n");


    wait_for_user();
    return 0;
}

void wait_for_user(void)
{
    printf("Click On Enter Key To Exit The Program \n");
    while(getchar() != '\n')
    {
        // clear input buffer
    }
    getchar();
}
