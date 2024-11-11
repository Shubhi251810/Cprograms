//WAP to swap the 2 numbers with using extra variable.
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("a=%d b=%d",a,b);
getch();
}