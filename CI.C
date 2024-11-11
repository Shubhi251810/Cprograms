#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,t,ci,n;
printf("Enter the value of p,r,t,n:");
scanf("%f%f%f%f",&p,&r,&t,&n);
ci=p*pow((1+r/n),n*t)-p;
printf("compound intrest : %f",ci);
getch();
}