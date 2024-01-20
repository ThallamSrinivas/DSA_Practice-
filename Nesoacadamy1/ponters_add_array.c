//// name of the array represents base adress of the array.
//#include<stdio.h>
//int main()
//{
//    int a[5];
//    *a =10;
//    printf("%d ",a[0]);
//    *(a+1)=20;
//    printf("%d ",a[1]);
//    return 0;
//}
//Adding the numbers of the array using pointer.
#include<stdio.h>
int main()
{
    int a[10] ={1,2,3,4,5,6,7,8,9,10};
    int *p , sum =0;
    for (p=a; p<=a+9; p++)
        sum = sum+ *p;
    printf("%d",sum);
}
