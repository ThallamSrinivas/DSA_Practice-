// Find the smallest and largest element of an array using pointers

#include<stdio.h>
int minmax();


int main()
{

    int array[] ={15,86, 25, 3, 474, 658, 123, 999};
    int len =sizeof(array)/sizeof(array[0]);
    int min, max;

   minmax(array, len, &min, &max);
    printf("min value is :%d  and Max value is %d ", min, max);
    return 0;
}
int minmax(int a[], int len, int *min, int *max)
{

 *min = a[0];
 *max = a[0];
 for (int i =1;i<len;i++)
 {
     if(a[i]<*min)
        *min = a[i];
     if(a[i]>*max)
        *max=a[i];
 }

return 0;
}
