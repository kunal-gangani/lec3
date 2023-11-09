#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	float radius,areac;
	const float pi=3.14;
	printf("Enter the Value of Radius:- ");
	scanf("%f",&radius);
	areac=pi*radius*radius;
	printf("\nThe area of Circle is: %f",areac);
	getch();
}