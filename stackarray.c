#include<stdio.h>
#define n (5)

int stack[n];
int top=-1;



void push(int x)
{
 
 if(top==n-1)
 {printf("Overflow");}
 else
 {
  top++;
  stack[top]=x;
 }
} 

void pop()
{
 
 int item;
 if(top==-1)	
 {printf("Underflow");}
 else
 {
 item=stack[top];
 top--;
 printf("\nThe popped item is %d\n",item);
 }
}

void display()
{
 int i;
 
 for(i=top;i>=0;i--)
 {
  printf("%d  ",stack[i]);
 }
}
 void main()
 {
 printf("Elements in the stack : ");
 push(1);
 push(2);
 push(3);
 display();
 pop();
 printf("\nDisplaying elements after using pop function\n");
 display();
}
   
