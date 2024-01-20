//Matrix multiplication of a [3][3] and b [3][3]
#include<stdio.h>
#define m1 3
#define n1 3
#define m2 3
#define n2 3
int main()
{
int array1[m1][n1];
int array2[m2][n2] ;
int ResultM[m1][n2];

printf("Enter the elements of the first matrix");

for (int i=0; i<m1;i++)
{
    for(int j=0; j<n1;j++)
    {
        scanf("%d",&array1[i][j]);
    }
}
printf("Enter the elements of the second matrix");
for (int i=0; i<m1;i++)
{
    for(int j=0; j<n1;j++)
    {
        scanf("%d",&array2[i][j]);
    }
}

// multiplication:
int sum =0,i,j;
for (int i=0;i<m1;i++)
{
    for(int j =0;j<n2;j++)
    {
        for(int k =0;k<n1;k++)
        {
           sum = sum+array1[i][k]*array2[k][j];
        }
 ResultM[i][j]=sum; sum=0;
    }

}
for (int i=0;i<m1;i++)
{
    for(int j =0;j<n2;j++)
    {
printf("%d ",ResultM[i][j]);
}
}
}
