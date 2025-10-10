/*
This progam shows the usage of struct
Date: 10th Oct 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

struct value {

	int num1;
	float num2;
	long int num3;

};

struct value val(struct value v1);
void main()
{

	struct value v1 = {0, 0.0, 0};
	clrscr();
	v1 = val(v1);
	printf("\n%d", v1.num1);
	printf("\n%.2f", v1.num2);
	printf("\n%d", v1.num3);
	getch();


}

struct value val(struct value v1)
{

	printf("\nInput three values \n");
	scanf("%d", &v1.num1);
	scanf("%f", &v1.num2);
	scanf("%d", &v1.num3);

    return v1;

}
