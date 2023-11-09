#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	float p,r,t,si;
	printf("Enter the Principal Amount: ");
	scanf("%f",&p);
	printf("\nEnter the Rate of Amount: ");
	scanf("%f",&r);
	printf("\nEnter the Time Period: ");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("The value of Simple Interest is : %f",si);
	getch();
}