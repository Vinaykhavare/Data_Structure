#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[]={2,17,23,34,56,61,69,78,84,91,98};
	int low=0;
	int high=10;
	int mid=5;
	int key;
	clrscr();
	printf("Array list is :");
	for(i=0;i<10;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\nEnter the element you want: ");
	scanf("%d",&key);
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key<a[mid])
		{
			high=mid-1;
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
		else if(key==a[mid])
		{
			printf("Found Element at location:%d\n ",mid);
			break;
		}
	}
	getch();
	
}
