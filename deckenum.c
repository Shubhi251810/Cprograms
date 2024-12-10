/*use enum {example:- suit & rank} for cards to print all cards in a  deck.*/
#include<stdio.h>
enum suit{
	heart=1,diamond,spade,club
}s;
enum rank{
	Ace=1, two,three, four,five,six, seven, eight, nine, ten,jack,queen,king
}r;
int main()
{
	switch(s)
	{
		case 1:printf("heart");
		case 2:printf("diamond");
		case 3:printf("spade");
		case 4:printf("club");
	}
	switch(r)
	{
		case 1:printf("ace");
		case 2:printf("two");
		case 3:printf("three");
		case 4:printf("four");
		case 5:printf("five");
		case 6:printf("six");
		case 7:printf("seven");
		case 8:printf("eight");
		case 9:printf("nine");
		case 10:printf("ten");
		case 11:printf("jack");
		case 12:printf("queen");
		case 13:printf("king");
	}
	return 0;
 } 
