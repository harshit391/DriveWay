#include <stdio.h>

void displayspecofcar(char name[70],int price,int hp,int topspeed,char speedtype[4],float acceleration,char accetype[30],int torque,char torty[10],float displacement,char disty[10])
{
    printf("\nDisplaying Full Specs of the car: \n\n");
    // printf("Car Company: %s\n",companyname);
    printf("Full Name of car: %s\n",name);
    printf("Price of Car in USD: %d\n",price);
    printf("HorsePower of car is: %d\n",hp);
    printf("Top Speed of car in %s is: %d\n",speedtype,topspeed);
    printf("Acceleration of Car %s is: %.1f\n",accetype,acceleration);
    printf("Torque of the Car in %s is: %d\n",torty,torque);
    printf("%s is %.3f\n\n",disty,displacement);
}

