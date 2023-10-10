#include<stdio.h>
#include<conio.h>
void main()
{
	int i,day;
	clrscr();
	printf("\n1 : Sunday");
	printf("\n2 : Monday");
	printf("\n3 : Tuesday");
	printf("\n4 : Wednesday");
	printf("\n5 : Thursday");
	printf("\n6 : Friday");
	printf("\n7 : Saturday");
	printf("\nEnter your choice:");
	scanf("%d",&day);
	switch(day)
	{
	case 1:
	printf("Sunday");
	break;
	case 2:
	printf("Monday");
	break;
	case 3:
	printf("Tuesday");
	break;
	case 4:
	printf("Wednesday");
	break;
	case 5:
	printf("Thursday");
	break;
	case 6:
	printf("Friday");
	break;
	case 7:
	printf("Saturday");
	break;
	default :
	{
	printf("you have enter a wrong value");
	}
	}
	getch();
}
