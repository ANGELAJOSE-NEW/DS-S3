//string pallindrome
#include<stdio.h>
#include<string.h>
char stack[10];
int top=-1;

void push(char s){
  if(top==9)
  printf("Stack overflow");
  else{
  top++;
  stack[top]=s;
  
  
  }
  
  }
  
  
 /*void display(int top){


 int i;
  for(i=top;i>=0;i--){
  printf("%c",stack[i]);
  }
  printf("\n");
  }*/
  
  void compare(char s[],char stack[]){
  int i,j;
  int flag=0;

  for(i=0,j=top;i<strlen(s),j>=0;i++,j--){
  if(s[i]!=stack[j]){
   flag=1;
   break;
   }
   }
   if(flag==1)
    printf("NOT PALLINDROME");
    else{
    printf(" PALLINDROME");
    }
    }
    
 void main(){
 char s[15];
 int i;

 printf("Enter the string\n");
 gets(s);
 for(i=0;i<strlen(s);i++){
  push(s[i]);
  }
  //display(top);
 compare(s,stack);
  }
  
  
  
