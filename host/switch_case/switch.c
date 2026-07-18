/*
 * switch.c
 *
 *  Created on: Jul 4, 2026
 *      Author: josab
 */

#include<stdio.h>
#include<stdint.h>
int main(void)
{
	/*uint32_t engine_is_ON = 0;
	printf("Enter ENGINE STATUS\n");
	fflush(stdout);
	scanf("%d",&engine_is_ON);
	switch(engine_is_ON)
	{
	case 0:
		printf("ENGINE STATUS is OFF\n");
		break;
	case 1:
		printf("ENGINE STATUS is ON\n");
		break;
	default :
		printf("ENGINE MALFUNCTION \n Visit Dealership ! ");
	}
	 */

	char x;
	printf("Enter the name of the shape for AREA calculation\n");
	printf("t for Triangle\n z for Trapezoid\n c for circle\n s for square\n r Rectangle\n");
	fflush(stdout);
	scanf("%c",&x);
	switch(x)
	{
	case 't':
	{
		float h,b;
		printf("Enter height and breadth\n");
		fflush(stdout);
		scanf("%f %f",&h,&b);
		printf("Area of Triangle =%f\n",(h*b)/2);
		break;
	}
	case 'z':
	{
		float a,b,h;
		printf("Enter two sides and the height\n");
		fflush(stdout);
		scanf("%f %f %f", &a, &b, &h);
		printf("Area of Triangle =%f\n",((a+b)/2)*h);
		break;
	}
	case 'c':
	{
		float r;
		float pi =3.142;
		printf("Enter the radius\n");
		fflush(stdout);
		scanf("%f ",&r);
		printf("Area of Triangle =%f\n",pi*r*r);
		break;
	}
	case 's':
	{
		float a;
		printf("Enter the side\n");
		fflush(stdout);
		scanf("%f ",&a);
		printf("Area of Triangle =%f\n",a*a);
		break;
	}
	case 'r':
	{
		float w,l;
		printf("Enter height and breadth\n");
		fflush(stdout);
		scanf("%f %f",&w,&l);
		printf("Area of Triangle =%f\n",w*l);
		break;
	}
	default:
		printf("INVLAID Charecter \n");

	}
	printf("Click on ENTER key to exit\n");
	while(getchar()!= '\n')
	{

	}
	getchar();
}
