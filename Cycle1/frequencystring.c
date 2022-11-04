#include<stdio.h>
void main()
{
char s[30],c;
int i,fr=0;
printf("enter the string:  ");
gets(s);
printf("enter the character whose frequency needs to be calculated:  ");
scanf("%c",&c);
for(i=0;s[i]!='\0';i++)
{if (s[i]==c)
 fr++;}
 printf("%c repeats %d times",c,fr);
 }
