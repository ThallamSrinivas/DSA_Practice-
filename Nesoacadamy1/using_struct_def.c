// struct type using struct def
#include<stdio.h>
typedef struct Car{
char *engine;
char *fueltype;
int tankcapacity;
}Car;
int main()
{
    Car car1;
    Car car2;
    car1.engine ="DDis 190 Engine";
    car2.engine ="1.2 Kappa dual VTVT";
    printf("%s\n",car1.engine);
    printf("%s\n",car2.engine);
    return 0;
}
