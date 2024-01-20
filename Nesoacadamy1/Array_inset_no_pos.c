// insert a number at certain position in the array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array1[10]={1,2,3,4,5,6,7,8,9,10};
    int  pos =5, n=25;
    int size = sizeof(array1)/sizeof(array1[0]);
    int array2[size+1]; int i;
    for(i =0;i<=pos-2;i++) //index =pos-1;
    {
        array2[i]=array1[i];
    }
    array2[pos-1]=n;
    for(i=pos;i<=size;i++)
    {
        array2[i]=array1[i-1];
    }
    for(i=0;i<=size;i++)
    {
        printf("%d ", array2[i]);
    }
    return 0;
}
