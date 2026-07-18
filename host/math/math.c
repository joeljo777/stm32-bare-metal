/*
 * math.c
 *
 *  Created on: Jun 8, 2026
 *      Author: josab
 */

//declaration
int add(int a, int b);
int subb(int a, int b);
long long mult(int a, int b);
float div(int a, int b);


//definition
int add(int a, int b)
{
	return a+b;
}

int subb(int a, int b)
{
	return a-b;
}

long long mult(int a, int b)
{
	return (long long)a*b;
}

float div(int a, int b)
{
	return (float)a/b;
}
