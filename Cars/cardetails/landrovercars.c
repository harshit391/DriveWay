#include <stdio.h>
#include "specs\displayspecs.c"

void sport()
{
    char fullname[70]="Land Rover Range Rover Sport Dynamic";
    int price = 83000;
    int horsepower = 350;
    int topspeed = 145;
    char topsp[4]="kmh";
    char accet[30]="0 to 100 kmh in seconds";
    float acceleration = 6;
    int tor = 516;
    char tort[20]="newton - meter";
    char dis[10] = "CC";
    float displasc=2.997;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void defender()
{
    char fullname[70]="Land Rover Defender S";
    int price = 68000;
    int horsepower = 296;
    int topspeed = 119;
    char topsp[4]="kmh";
    char accet[30]="0 to 100 kmh in seconds";
    float acceleration = 7.5;
    int tor = 295;
    char tort[20]="newton - meter";
    char dis[10] = "CC";
    float displasc=2.996;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void discovery()
{
    char fullname[70]="Land Rover Discovery S";
    int price = 58400;
    int horsepower = 296;
    int topspeed = 125;
    char topsp[4]="kmh";
    char accet[30]="0 to 100 kmh in seconds";
    float acceleration = 6.9;
    int tor = 295;
    char tort[20]="newton - meter";
    char dis[10] = "CC";
    float displasc=1.997;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void se()
{
    char fullname[70]="Land Rover Range Rover SE";
    int price = 106500;
    int horsepower = 395;
    int topspeed = 150;
    char topsp[4]="kmh";
    char accet[30]="0 to 100 kmh in seconds";
    float acceleration = 5.5;
    int tor = 406;
    char tort[20]="newton - meter";
    char dis[10] = "CC";
    float displasc=2.997;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}


void evoque()
{
    char fullname[70]="Land Rover Range Rover Evoque SE";
    int price = 51000;
    int horsepower = 246;
    int topspeed = 143;
    char topsp[4]="kmh";
    char accet[30]="0 to 100 kmh in seconds";
    float acceleration = 7;
    int tor = 269;
    char tort[20]="newton - meter";
    char dis[10] = "CC";
    float displasc=1.997;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void velar()
{
    char fullname[70]="Land Rover Range Rover Velar S";
    int price = 61500;
    int horsepower = 247;
    int topspeed = 135;
    char topsp[4]="kmh";
    char accet[30]="0 to 100 kmh in seconds";
    float acceleration = 7.1;
    int tor = 269;
    char tort[20]="newton - meter";
    char dis[10] = "CC";
    float displasc=1.998;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}
