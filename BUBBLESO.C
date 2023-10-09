#include<stdio.h>
#include<conio.h>
void main()
{
 int array []={56,23,12,20,5,21,2};
 int i,j,temp;
 int n=7;
 clrscr();
 printf("\n unsorted array list:");
 for(i=0;i<7;i++)
 {
 printf("\n %d",array[i]);
 }
 for (i=0;i<7-1;i++)
 {
 for (j=0; i<7-j-1;j++)
 {
 if(array[j]>array[j+1])
 {
 temp=array[j];
 array[j]=array[j+1];
 array[j+1]=temp;
 }
 }
 }
 printf("\n sorted list is:");
 for(i=0;i<7;i++)
 {
 printf("\n %d",array[i]);
 }
 getch();
 }














































































