#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int sub1,sub2,sub3,sub4,sub5,sub6,sub7,sub8,total;
	float perc;
	printf("Enter the marks of Sub 1:");
	scanf("%d",&sub1);
	printf("\nEnter the marks of Sub 2: ");
	scanf("%d",&sub2);
	printf("\nEnter the marks of Sub 3: ");
	scanf("%d",&sub3);
	printf("\nEnter the marks of Sub 4: ");
	scanf("%d",&sub4);
	printf("\nEnter the marks of Sub 5: ");
	scanf("%d",&sub5);
	printf("\nEnter the marks of Sub 6: ");
	scanf("%d",&sub6);
	printf("\nEnter the marks of Sub 7: ");
	scanf("%d",&sub7);
	printf("\nEnter the marks of Sub 8: ");
	scanf("%d",&sub8);
	total=sub1+sub2+sub3+sub4+sub5+sub6+sub7+sub8;
	perc=total/8;
	printf("\nThe total of 8 subjects is: %d",total);
	printf("\nThe percentage of 8 subjects is: %f",perc);
	getch();
}