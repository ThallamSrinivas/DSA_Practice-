//write a program that reads 5*5 array and prints row sum and column sum
#include<stdio.h>
#define m 5
#define n 5
int main()
{
    //int m=5,n=5;
    int array[m][n] ={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};

    int row_sum =0, col_sum =0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            row_sum = row_sum+array[i][j];
            col_sum = col_sum+array[j][i];
        }
        printf("row total: %d ", row_sum);
        printf("col total: %d " ,col_sum);
        row_sum =0;
        col_sum =0;
    }

}
