/*
 * f.c
 *
 *  Created on: Jul 3, 2026
 *      Author: josab
 */


#include<stdio.h>
int main(void)
{
	/*double n =10.123456789;
	int n1 =1.23456789;
	int e = 1000;
	double q =-1.6021e-19;
	printf("n= %0.9lf\n",n);
	printf("n1= %f\n",n1);
	printf("e= %e\n",e);
	printf("q= %le\n",q);*/
	int b, c;

	    printf("Enter 1st number: ");
	    fflush(stdout);
	    scanf("%d", &b);

	    printf("Enter 2nd number: ");
	    fflush(stdout);
	    scanf("%d", &c);

	    // Cast the sum to float to prevent integer truncation
	    printf("average = %.1f\n", (float)(b + c) / 2);

	    printf("Press enter to exit the Program\n");

	    // Clear the input buffer left by scanf
	    while(getchar() != '\n')
	    {
	    }

	    // Pause program until Enter is pressed
	    getchar();

	    return 0;
}
