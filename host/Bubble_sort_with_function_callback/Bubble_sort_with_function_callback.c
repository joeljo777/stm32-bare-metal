/*
 * Bubble_sort_with_function_callback.c
 *
 *  Created on: Jul 30, 2026
 *      Author: josab
 */


#include <stdio.h>
#include <stdlib.h>
/*
 * callback function should compare two integers and return 1 is 1st one is bigger than second
 * 0 if elements are equal
 * -1 if 2nd one has higher rank than 1st one
 * */
int compare(int a ,int b)
{
	if(a>b)
		return 1;
	else
		return -1;
}
void wait_for_usr(void);

void BubbleSort(int *A, int n, int (*compare)(int,int))
{
    int temp;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(compare(A[j] , A[j + 1])>0)
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int A[] = {5, 6, 1, 3};

    BubbleSort(A, 4,compare);

    for(int k = 0; k < 4; k++)
    {
        printf("A[%d] = %d\t", k, A[k]);
    }

    printf("\n");

    wait_for_usr();

    return 0;
}

void wait_for_usr(void)
{
    printf("Click On Enter to Exit the PROGRAM\n");

    while(getchar() != '\n')
    {
    }

    getchar();
}
