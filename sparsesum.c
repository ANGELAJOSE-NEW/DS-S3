#include<stdio.h>



void matrix(int p[10][10],int m,int n)
{
int i,j;

printf("Enter the elements");
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
  scanf("%d",&p[i][j]);
 }
}
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
  printf("%d ",p[i][j]);
 }
 printf("\n");
}
}





 
void sparserep(int m,int n,int p[10][10],int q[10][3])
{
//triplet rep
int i,j,k;
q[0][0]=m;
q[0][1]=n;
k=1;
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
  if(p[i][j]!=0)
  {
   q[k][0]=i;
   q[k][1]=j;
   q[k][2]=p[i][j];
   k++;
  }
 }
}
q[0][2]=k-1;
//printing the triplet representation
printf("Triplet representation\n");
for(i=0;i<k;i++)
{
 for(j=0;j<3;j++)
 {
  printf("%d ",q[i][j]);
 }
 printf("\n");
}
}






void sparsesum(int a[10][3],int b[10][3])
{
int c[10][3];

for(i=0;i<k;i++)
{
 for(j=0;j<3;j++)
 {
  c[i][j]=a[i][j]+b[i][j];
  printf("%d ",c[i][j]);
 }
 printf("\n");
}
}



void main()
{
int a[10][10],sa[10][3],b[10][10],sb[10][3];

int m,n,p,q;
printf("Enter the order of matrix a");
scanf("%d %d",&m,&n);
matrix(a[10][10],m,n);
sparserep(m,n,a[10][10],sa[10][3]);
matrix(b[10][10],m,n);
sparserep(p,q,b[10][10],sb[10][3]);
sparsesum(a[10][3],b[10][3]);
}





