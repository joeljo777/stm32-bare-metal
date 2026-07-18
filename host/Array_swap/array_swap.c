/*
 * array_swap.c
 *
 *  Created on: Jul 17, 2026
 *      Author: josab
 */


#include <stdio.h>
#include <stdint.h>
void wait_for_user_input(void);
void display_array(int32_t *parray,uint32_t len);
void array_swap(int32_t *arr1, uint32_t l1,int32_t *arr2, uint32_t l2);
int main(void)
{


	int32_t len1,len2;
	printf("Enter the size of array 1 and 2\n");
	scanf("%d %d",&len1,&len2);

	if((!len1 && len2))
	{
		printf("Array length should be NON-ZERO");
	}
	int32_t array1[len1];
	int32_t array2[len2];

	//elements for array 1;
	printf("Enter the elements of array1\n");
	for(uint8_t i=0;i<len1;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("\n");


	//elements for array 2;
	printf("Enter the elements of array2\n");
	for(uint8_t i=0;i<len2;i++)
	{
		scanf("%d",&array2[i]);
	}
	printf("\n");


	printf("Contents of array before swapping\n");

	display_array(array1,len1);
	printf("\n");
	display_array(array2,len2);

	printf("Contents of array after swapping\n");
	array_swap(array1,len1,array2,len2);
	printf("Contents of array before swapping\n");

	display_array(array1,len1);
	printf("\n");
	display_array(array2,len2);
    wait_for_user_input();

    return 0;
}

void display_array(int32_t *parray,uint32_t len)
{
	for(uint8_t i=0;i<len;i++)
	{
		printf("%d\t",parray[i]);
	}
	printf("\n");
}

void array_swap(int32_t *arr1, uint32_t l1,int32_t *arr2, uint32_t l2)
{
	uint32_t len = l1<l2 ?l1:l2;

	for(uint8_t i=0;i<len;i++)
	{
		int32_t temp =arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
void wait_for_user_input(void)
{
    printf("Please Click on Enter Key to EXIT the program\n");

    while(getchar() != '\n')
    {

    }

    getchar();
}
