/*
 * array.c
 *
 *  Created on: Jul 28, 2026
 *      Author: josab
 */


#include<stdio.h>
#include<stdint.h>
#include<string.h>
void wait_for_usr(void);

int main(void)
{
	//int A[2][3][4];
	/*
	A
	│
	├── Layer 0  (A[0])  ← This is a complete 2D array (3×4)
	│
	│      1  2  3  4
	│      5  6  7  8
	│      9 10 11 12
	│
	└── Layer 1  (A[1])  ← Another complete 2D array (3×4)

		  13 14 15 16
		  17 18 19 20
		  21 22 23 24
	*/

   int A[2][3][4]=
   {
		   {{1,2,3,21}, //layer1
    		 {4,5,6,22},
    		 {7,8,9,23}},
			{{10,11,12,24},
			 {13,14,15,25},
			 {16,17,18,26}}

    };
   /*
                               Layer 0                                  Layer 1

800                     816                     832              848                     864                     880
┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
│  1 │  2 │  3 │ 21 │  4 │  5 │  6 │ 22 │  7 │  8 │  9 │ 23 │ 10 │ 11 │ 12 │ 24 │ 13 │ 14 │ 15 │ 25 │ 16 │ 17 │ 18 │ 26 │
└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
    * */
   for(int i =0;i<2;i++)
   {
	   for(int j=0;j<3;j++)
	   {
		   for(int k=0;k<4;k++)
		   {
			   printf("%d\t",A[i][j][k]);
		   }
		   printf("\n");
	   }

   }
	wait_for_usr();
}

void wait_for_usr(void)
{
	printf("Click On Enter to Exit the PROGRAM\n");
	while(getchar()!= '\n')
	{

	}
	getchar();
}
