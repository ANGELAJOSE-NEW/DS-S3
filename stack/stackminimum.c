int stack[20];
int axstack[20];
int top=-1,top1=-1,size=20;
#include<stdio.h>




 
 
 void push(int item){

 if(top==size-1){
 printf("Stack Overflow");}
 else{
 top++;
 stack[top]=item;
 }
 if(top==0){
 top1++;
 axstack[top1]=item;
 }
 if(stack[top]<axstack[top1]){
 top1++;
 axstack[top1]=stack[top];}

 //else{
// axstack[top]=item;
 }
 
 void getmin(){
 printf("%d",axstack[top1]);
 }
 
 
 
void pop(){
int i;
 for(i=top;i>=0;i--)
  if(top==-1){
  printf("Stack is empty");}
  if(stack[top]==axstack[top1]){
  top1--;
  top--;
  }
  else{
  
  top--;
  }
  }
  
  
 void main(){
 push(9);
 push(10);
 push(8);
 getmin();
 pop();
 printf("\n");
 getmin();
 push(5);
 printf("\n");
 getmin();
 push(18);
 printf("\n");
 getmin();
 
 }
 
 

  
 

 
 
 
 
 
 