#include<stdio.h>
#include<conio.h>
void main(){
	int n1,n2,n3,n4,n5,sum;
	clrscr();
	printf("Enter the value of Number 1: ");
	scanf("%d",&n1);
	printf("\nEnter the value of Number 2: ");
	scanf("%d",&n2);
	printf("\nEnter the value of Number 3: ");
	scanf("%d",&n3);
	printf("\nEnter the value of Number 4: ");
	scanf("%d",&n4);
	printf("\nEnter the value of Number 5: ");
	scanf("%d",&n5);
	sum=n1+n2+n3+n4+n5;
	printf("\nThe sum of the 5 numbers are: %d",sum);
	getch();
}