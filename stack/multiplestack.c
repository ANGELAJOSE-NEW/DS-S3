//multiple stack : 2 stack in same array
#include<stdio.h>
#define n 30
int stack[n];
int top1=-1;
int top2=n-1;
int size;


void push1(int item){

 if(top1==n-1)
 {printf("Overflow");}
 else
 {
  top1++;
  stack[top1]=item;
 }
} 

void push2(int item){
 
 if(top1+1==top2)
 {printf("Overflow");}
 else
 {
  top2--;
  stack[top2]=item;
 }
}


void pop1()
{
 

 if(top1==-1)	
 {printf("Underflow");}
 else
 {
 
 top1--;
 }
 }
 
 void pop2(){
 if(top2==n-1){
  printf("Underflow");}
  else{
  top2++;
  }
  }
  
  void display1()
{
 int i;
 for(i=top1;i>=0;i--)
 {
  printf("%d  ",stack[i]);
 }
}
 
 void display2()
{
 int i;
 for(i=top2;i<n-1;i++)
 {
// printf("%d",top2);
  printf("%d  ",stack[i]);
 }
}
 
 
 
 void main(){
// printf("Enter the size");
 //scanf("%d",&size);
 push1(5);
 push1(8);
 push1(9);
 display1();
 printf("\nElements of 2nd stack\n");
  push2(1);
 push2(10);
 push2(4);
 push2(6);
 display2();
 
 }