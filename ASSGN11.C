#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int width,height,arear;
	printf("Enter the value of Width :- ");
	scanf("%d",&width);
	printf("\nEnter the value of Height :- ");
	scanf("%d",&height);
	arear=width*height;
	printf("\nThe area of Rectangle is : %d",arear);
	getch();
}