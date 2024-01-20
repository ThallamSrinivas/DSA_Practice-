// print the elements of an array in the reverse order:
#include<stdio.h>
int main()
{
    int len;
printf("Enter the length of the array");
scanf("%d",&len);
int array[len];
int *p;

printf("Elements of the array");
for(p =array;p<=array+len-1;p++)
{
    scanf("%d",&*p);

}

printf("Elements in the reverse order");
for(p=array+len-1;p>=array;p--)
{
   printf("%d ",*p);
}
}
