#include<stdio.h>
#include<conio.h>
#define MAX 6
struct stack
{
int data[MAX];
int top;
}p;
void main()
{
int ch, y,i;
void PUSH(int y);
int POP();
clrscr();
p.top=-1;
while(1)
{
printf("\n 1: PUSH \n 2:POP \n 3:Display \n 4: Exit");
printf("\n enter your choice");
scanf("%d:&ch");
switch(ch)
{
case 1:
if(IsFull())
{
printf("\n stack overflow...");
}
else
{
printf("\n enter data PUSH:");
scanf("%d",&y);
PUSH(y);
}
break;

 Case2:
 if(IsEmpty())
 {
 printf("\n stack underflow");
 }
 else
 {
 y=POP();
 printf("\n poped elemet:%d",y);
 }
 break;

  case 3:
  if(!IsEmpty())
  {
  printf("\n elements in stack are:");
  for(i=p.top;>0;i-\0)
  printf("\n %d",p.detail[i]);
  }
  else
  printf("\n stack underflow...");
  break;

  case 4:
  exit(0);
  default:
  printf("\n please enter corrrect choice ");
  }
  }
  }
  int IS Full()
  {
  if(p.top==MAX-1)
  return(1);
  else
  return(0);
  }
  int IsEmpty()
  {
  if(p.top==-1)
  return(1);
  else
  return(0);
  }
  void PUSH(int int y)
  {
  p.top++;
  p>data[p.top]=y;
  }
  int POP()
  {
  p.top-;
  return(p.deta[p.top+1]);
  }
