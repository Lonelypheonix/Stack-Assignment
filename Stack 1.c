// Pavan Kumar J 20201CCS0094
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void push( int value);
void pop();
void display();

int s[SIZE], top = -1;

void main()
{
   int value, choice;
   while(1)
   {
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
     {
case 1: printf("Enter the value to be insert: ");
scanf("%d",&value);
push(value);
break;
case 2: pop();
break;
case 3: display();
break;
case 4: printf("****EXIT****\n");
                                exit(0);
default: printf("\nInvalid choice!!! Try again!!!");
      }
   }
}
void push(int value)
{
   if(top == SIZE-1)
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else
  {
      top++;
      s[top] = value;
      printf("\n%d element is inserted to stack",s[top]);
   }
}
void pop()
{
   if(top == -1)
     printf("\nStack is Empty!!! Deletion is not possible!!!");
  else
 {
      printf("\nDeleted element : %d", s[top]);
      top--;
   }
}
void display()
{
   if(top == -1)
      printf("\nStack is Empty!!!");
   else
  {
      int i;
      printf("\nStack elements are\n");
      for(i=0; i<=top; i++)

printf("%d\n",s[i]);
   }
}
