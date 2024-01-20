// Intilizing and accessing struct members
#include<stdio.h>
struct Car{
char engine[20];
char fueltype[20];
int tankcapacity;
};
int main()
{
 //struct Car c1,c2;

struct Car c1 = {"DDis", "Diesel", 30 };
struct Car c2 = {"Kappa", "Petrol", 27};

     printf("%s %s %d \n",c1.engine,c1.fueltype,c1.tankcapacity);
     printf("%s %s %d \n",c2.engine,c2.fueltype,c2.tankcapacity);


    return 0;
}
