// struct decalaration using struct type struct tags
#include<stdio.h>
struct Car{
char *engine;
char *fueltype;
int tankcapacity;
}car1;
int main()
{
    struct Car car2;  //using struct tag (useful for local Variables)
    car1.engine ="DDis 190 Engine";
    car2.engine ="1.2 Kappa dual VTVT";
    printf("%s\n",car1.engine);
    printf("%s\n",car2.engine);
    return 0;
}
