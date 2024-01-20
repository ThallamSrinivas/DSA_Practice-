// Structure declaration
#include<stdio.h>
struct{
char *engine;
char *fueltype;
int tankcapacity;
} car1, car2;
int main()
{
car1.engine ="DDis 190 Engine";
car2.engine ="1.2 Kappa Dual VTVVT";
printf("%s \n",car1.engine);
printf("%s",car2.engine);
    return 0;
}
