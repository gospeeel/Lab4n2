#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");

	int a = 11, b = 3;
	int x;
	float y;
	double z;

	x = a / b;
	y = a / b;
	z = a / b;

	printf("x = %d\n", x);
	printf("y = %f\n", y);
	printf("z = %lf\n", z);


	float F = (float)a / b;
	double D = (double)a / b;

	printf("F = %f\n", F);
	printf("D = %lf\n", D);
}