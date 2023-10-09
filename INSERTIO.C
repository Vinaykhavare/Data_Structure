#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={8,22,79,100,2};
int i,j,temp;
clrscr();
 printf("unsorted arry list");
 for(i=0;i<5;i++)
 {
 printf("\n%d",a[i]);
 }

	for(i=1;i<5;i++)
	{
	temp=a[i];
	j=i-1;
	while(j>=0 && a[j]>temp)
	{
	a[j+1]=a[j];
	j--;
	}
	a[j+1]=temp;
	}
	printf("\n sorted arry list is");
	for(i=0;i<5;i++)
	{
	printf("\n%d",a[i]);
	}
	getch();
	}