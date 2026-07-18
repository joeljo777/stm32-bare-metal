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
struct carModel
{
	uint32_t carNumber;
	uint16_t carPrize;
	uint16_t carMaxSpeed;
	float carWeight;
}__attribute__((packed));   //__attribute__((packed)) is used to remove structure padding
int main(void)
{
	//C89 method order is important
	struct carModel BMW ={2021,15000,220,1330};

	//C99 method using designated initializers
	//struct carModel Maserati = {.carMaxSpeed = 230, .carWeight = 5000, .carNumber = 20221, .carPrize = 20000};

	/*printf("Details of Car BMW is as follows\n");
	printf("carNumber = %u\n", BMW.carMaxSpeed);
	printf("carPrize = %u\n", BMW.carPrize);
	printf("carMaxSpeed = %u\n", BMW.carMaxSpeed);
	printf("carWeight = %0.2f\n", BMW.carWeight);
	printf("Maserati car prize before= %u\n",Maserati.carPrize);
	Maserati.carPrize = 100000;
	printf("Maserati car prize after = %u\n",Maserati.carPrize);*/
	uint32_t size = sizeof(struct carModel);
	uint8_t *ptr;
	ptr = (uint8_t*)&BMW;
	for(uint32_t i=0;i<size;i++)
	{
		printf("%p    %X\n",ptr,*ptr);
		ptr++;
	}

	/*
	0061FF04    E5
	0061FF05    7
	0061FF06    0
	0061FF07    0
	0061FF08    98
	*/
	printf("Size of struct = %d\n",size);
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
