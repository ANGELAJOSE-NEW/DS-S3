#include<stdio.h>
void main()
{
int a[10][10],b[10][3];
int i,j,k,m,n,sparsity;

printf("Enter the order of the matrix ");


scanf("%d %d",&m,&n);
printf("Enter the elements");
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
  scanf("%d",&a[i][j]);
 }
}
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
  printf("%d ",a[i][j]);
 }
 printf("\n");
}

 

//triplet rep
b[0][0]=m;
b[0][1]=n;
k=1;
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
  if(a[i][j]!=0)
  {
   b[k][0]=i;
   b[k][1]=j;
   b[k][2]=a[i][j];
   k++;
  }
 }
}
b[0][2]=k-1;
//printing the triplet representation
printf("Triplet representation\n");
for(i=0;i<k;i++)
{
 for(j=0;j<3;j++)
 {
  printf("%d ",b[i][j]);
 }
 printf("\n");
}

printf("Sparsity :");
sparsity=(k-1)/(m*n);
printf("%d",sparsity);
}

 


