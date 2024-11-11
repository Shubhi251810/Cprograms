#include<stdio.h>
#include<conio.h>
void main()
{
float cel,fah;
printf("Enter the temp in celsius:");
scanf("%f",&cel);
printf("Enter the temp in fahrenheit:");
scanf("%f",&fah);
fah=(1.8*cel)+32;
printf("temp in fahrenheit is %f",fah);
cel=(fah-32)/1.8;
printf("temp in celsius is %f",cel);
getch();
}