#include <stdio.h>
#include <conio.h>

void main()
 {
    int num1, num2;
    clrscr();


    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);


    if (num1 > num2) {
	printf("First number is greater than second number.\n");
    }
    else if (num1 < num2) {
	printf("First number is less than second number.\n");
    }
    else {
	printf("Both numbers are equal.\n");
    }

    getch();
}