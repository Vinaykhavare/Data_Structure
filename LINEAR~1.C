#include <stdio.h>
#include<conio.h>

int linearSearch(int a[], int n, int val)
{
	int i;
    for ( i = 0; i < n; i++)
    {
        if (a[i] == val)
            return i + 1;
    }
    return -1;
}
void main()
{

    int a[] = {70, 40, 30, 11, 57, 41, 25, 14, 52};

    int val = 41;

int n= sizeof(a)/sizeof(a[0]);

int res = linearSearch(a, n, val);
int i;
clrscr();
printf("The of the array :");
for( i=0;i<n;i++)
{
	printf("\t%d", a[i]);
}


printf("\nElement to be searched is \t%d " ,val);
 if (res-1)
 {
             printf("\n\n\nElement is present at %d position ", res);
 }

 else
 {

        printf("\n\n\nElement is not present in the array");
 }
getch();
}
