/*
 * struct.c
 *
 * Created on: Jul 15, 2026
 * Author: josab
 */



#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);
void array_disp(uint8_t const *ptr, uint8_t nitems);

int main(void)
{
	//index starts at zero(0)

	/*uint32_t array[100];
	printf("%u\n",sizeof(array));
	printf("%p\n",sizeof(array));*/

	uint8_t data[2] ={1,2};

	/*printf("%#X\n",(*data));
	*data = 0x10;
	printf("%#X\n",(*data));
	// (*data+1) =0x0 is same  as  data[1]=0x0
	printf("enter the 2 elements : \n");
	for(uint32_t i=0; i<sizeof(data);i++)
	{
		scanf("%hhu",&data[i]);
	}*/

	/*for(uint32_t i=0; i<sizeof(data);i++)
	{
		printf("%#X\t",data[i]);
	}
	printf("\n");*/
	uint8_t nitems = sizeof(data)/sizeof(uint8_t);
	array_disp(data, nitems);

    wait_for_user_input();

    return 0;
}
void array_disp(uint8_t const *ptr, uint8_t nitems)
{
	for(uint8_t i=0; i<nitems; i++)
	{
		printf("%#X\t",ptr[i]);
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
