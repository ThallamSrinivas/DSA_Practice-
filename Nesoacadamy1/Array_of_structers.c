// Array of structures
#include<stdio.h>
struct Car{
char engine[20];
char fueltype[20];
int tankcapacity;
};
int main()
{
 struct Car c[2] = {{"DDis", "Diesel",  30},{"Kappa" ,"Petrol",  27}};
 c[1].tankcapacity =35;
 //struct Car c2;

//struct Car c[0]= {"DDis", "Diesel",  30};
 //struct Car c[1] = {"Kappa" ,"Petrol",  27};
// c[0].engine ="DDis"; //c[0].fueltype = "Diesel"; c[0].tankcapacity = 30;
 //c[1].engine ="Kappa"; c[1].fueltype ="Petrol"; c[1].tankcapacity = 27;

     printf("%s %s %d \n",c[0].engine,c[0].fueltype,c[0].tankcapacity);
     printf("%s %s %d \n",c[1].engine,c[1].fueltype,c[1].tankcapacity);


    return 0;
}
