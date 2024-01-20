//Application of Function pointers:  //int (*ptr)(int ,int); function pointer prototype
#include<stdio.h>
float add(float a, float b) {return a+b;}
float sub(float a, float b) {return a-b;}
float mul(float a, float b) {return a*b;}
float div(float a, float b) {return a/b;}

int main()
{
    float (*(ptr[]))(float,float)= {add,sub,mul,div};
    int choice;
    float a,b;
    printf("Enter the choice");
    scanf("%d",&choice);
    printf("Enter the numbers");
    scanf("%f %f",&a,&b);
float result =ptr[choice](a,b);

printf("%f",result);
    return 0;
}
