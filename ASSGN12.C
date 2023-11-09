#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	float b,h,areat,bh;
	printf("Enter the value of Breadth: ");
	scanf("%f",&b);
	printf("Enter the value of Height: ");
	scanf("%f",&h);
	areat=(b*h)/2;
	printf("The Area of Triangle is: %f",areat);
	getch();

}