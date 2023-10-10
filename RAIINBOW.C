#include<stdio.h>
#include<conio.h>
void main()
{
	int rainbow;
	clrscr();
	printf("\n1 : Red");
	printf("\n2 : Orange");
	printf("\n3 : Yellow");
	printf("\n4 : Green");
	printf("\n5 : Blue");
	printf("\n6 : Indigo");
	printf("\n7 : Violet");
	printf("\nEnter your choice:");
	scanf("%d",&rainbow);
	switch(rainbow)
	{
	case 1:
	printf("Red");
	break;
	case 2:
	printf("Orange");
	break;
	case 3:
	printf("Yellow");
	break;
	case 4:
	printf("Green");
	break;
	case 5:
	printf("Blue");
	break;
	case 6:
	printf("Indigo");
	break;
	case 7:
	printf("Violet");
	break;
	default :
	{
	printf("you have enter a wrong value");
	}
	}
	getch();
}