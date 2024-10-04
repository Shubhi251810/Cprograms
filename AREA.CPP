
#include<stdio.h>
#include<conio.h>
void main()
{
int as,ar,ac,ps,pr,l,w,s,r;
clrscr();
printf("enter the length,weith and side and radius");
scanf("%d %d %d %d",&l &w &s &r);
as=s*s;
printf("area of square: %d"as);
ar=l*w;
printf("area of rectangle: %d",ar);
ac=3.14* r*r;
printf("area of circle: %d",ac);
ps=4*s;
printf("perimeter of square: %d",ps);
pr=2*(l+w);
printf("perimeter of rectangle: %d",pr);
getch();
}