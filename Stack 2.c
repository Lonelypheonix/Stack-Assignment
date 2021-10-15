#include<stdio.h> 
#include<stdlib.h> 
// Pavan Kumar J 20201CCS0094
#define max 50 
void main() 
{ 
  char stk[max],exp[100]; 
  int top,i;                
  top = -1;                
  printf("\nEnter an infix expression\n"); 
  gets(exp);            
  for(i=0; exp[i] != '\0'; i++) 
  { 
    if(exp[i]=='(' || exp[i] =='[' || exp[i] == '{' ) 
     { 
       top++; 
       stk[top]= exp[i]; 
      } 
    else if(exp[i] == ')') 
     { 
       if(stk[top] == '(') 
        { top--;} 
       else 
        { 
          printf("Unbalanced expression\n"); 
          exit(0); 
         } 
      } 
        if(exp[i] == ']') 
         { 
           if(stk[top] == '[') 
            {top--;} 
           else 
            { 
             printf("Unbalanced expression\n"); 
              exit(0); 
            } 
          } 
           if(exp[i] == '}') 
           { 
             if(stk[top] == '{') 
              { top--;} 
              else 
               { 
                 printf("Unbalanced expression\n"); 
                 exit(0); 
              } 
           } 
         }  
         if(top == -1) 
         printf("Expression is balanced\n"); 
         else 
         printf("Exp is not balanced"); 
} 