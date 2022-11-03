//DECIMAL TO BINARY AND HEXADECIMAL
#include<stdio.h>

int stack[30];
int stack[30];
int size;
int top=-1;


void push(int item){
  if(top==size-1){
 printf("Stack Overflow");}
 else{
 top++;
 stack[top]=item;
 }
 }
 
 
void pop(){
int i;
 for(i=top;i>=0;i--)
  if(top==-1){
  printf("Stack is empty");}
  else{
  top--;
  }
  }



void convert_bin(int n){
int rem;
while(n!=0){
   rem=n%2;
   push(rem);
   n=n/2;
   }
   }
   
   
 
void display_bin(int top){
int i; 
for(i=top;i>=0;i--){
 printf("%d",stack[i]);
}
}


void display_hex(int top){
int i;

for(i=top;i>=0;i--){
if(stack[i]==10){
printf("A");}
else if(stack[i]==11){
printf("B");}
else if(stack[i]==12){
printf("C");}
else if(stack[i]==13){
printf("D");}
else if(stack[i]==14){
printf("E");}
else if(stack[i]==15){
printf("F");}
else{
printf("%d",stack[i]);
}

}
}

void convert_hex(int n){
int rem;
while(n!=0){
   rem=n%16;
   push(rem);
   n=n/16;
   }
   }
   
 void main()
 {
 int n;
 printf("Enter the size of stack : ");
 scanf("%d",&size);
 printf("Enter the number :  ");
 scanf("%d",&n);

 convert_bin(n);
 printf("Binary equivalent :");
 display_bin(top);//value of top at last push
 pop();
 convert_hex(n);
 printf("\n");
 printf("Hexadecimal equivalent :");
  display_hex(top);
 
 }
 


