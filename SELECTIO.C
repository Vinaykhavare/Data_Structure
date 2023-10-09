#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={22,45,99,5,77};
int i,j,swap;
int n=5;
clrscr();

printf("\n unsroted array list is");
for(i=0;i<6;i++)
{
printf("\n%d",a[i]);
}

 for(i=0;i<n-1;i++)
 {
 int min=i;
 for(j=i+1;j<n;j++)
 {
 if(a[j]<a[min])
 {
 min=j;
 }
 }
 if(min!=i)
 {
 swap=a[i];
 a[i]=a[min];
 a[min]=swap;
 }
 }
 printf("\n sorted list is");
 for(i=0;i<n;i++)
 {
 printf("\n%d",a[i]);
 }
 getch();
 }