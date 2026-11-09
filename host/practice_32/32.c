/*
 * 32.c
 *
 *  Created on: Nov 9, 2026
 *      Author: josab
 */
/*Structures in c*/



#include<stdio.h>
#include<stdint.h>
void wait_for_usr(void);
struct car {
	char *engine;
};
int main()
{
	struct car car1;
	struct car car2;
	car1.engine = "Twin Cylinder V8";
	printf("%s\n",car1.engine);
	car2.engine = "Twin Cylinder Inline 8";
	printf("%s\n",car2.engine);

	return 0;
	wait_for_usr();
}
void wait_for_usr(void)
{
	printf("Click On The Enter Key To Exit The Program \n");
	while(getchar() != '\n')
	{
		//
	}
	getchar();
}


