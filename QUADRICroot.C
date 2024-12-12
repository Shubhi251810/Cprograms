#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf("Enter the value of a,b,c:");
scanf("%d %d %d",&a,&b,&c);
d=b*b-a*a*c;
if(d==0)
{
printf("the roots are equal");
}
else if(d>0)
{
printf("the roots are real");
}
else{
printf("the root are imaginary");
}
getch();
}
