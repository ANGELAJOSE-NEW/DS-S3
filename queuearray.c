#include<stdio.h>
#define n (5)//macrodefinition ie in program wherever we use n it will be replaced by 5
int queue[n];//this declaration is only possible if you declare it outside main function ie with n
int front=-1;
int rear=-1;

void enqueue(int x)
{
 if(rear==n-1)
  printf("Overflow");
 else if(front==-1 && rear==-1)
  { 
   front=rear=0;
   queue[rear]=x;}
  else
  {
  rear++;
  queue[rear]=x;
  }
}

void dequeue()
{
 if(front==-1 && rear==-1)
 printf("Underflow");
 else if(front==rear)
 front=rear=-1;//by deleting if you have deleted all the elements
 else
 {
  front++;
 }
}

void display()
{
 int i;
 if(front==-1 && rear==-1)
 printf("Underflow");
 else
 {
  for(i=front;i<rear+1;i++)
  {printf("%d  ",queue[i]);}
 }
}

void main()
{
 enqueue(1);
 enqueue(2);
 enqueue(3);
 display();
 dequeue();
 printf("\nDisplaying elements after dequeue\n");
 display();
}
