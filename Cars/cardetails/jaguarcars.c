#include <stdio.h>
#include "specs\displayspecs.c"

void xf()
{
    char fullname[70]="Jaguar XF Saloon P250 RWD";
    int price = 47000;
    int horsepower = 201;
    int topspeed = 146;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 7.5;
    int tor = 317;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=1.997;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void epace()
{
    char fullname[70]="Jaguar E-Pace SE P250 AWD AUTOMATIC";
    int price = 48000;
    int horsepower = 246;
    int topspeed = 142;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 7;
    int tor = 269   ;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=1.997;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void fpace()
{
    char fullname[70]="Jaguar F-Pace P250 AWD AUTOMATIC";
    int price = 52400;
    int horsepower = 246;
    int topspeed = 135;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 6.9;
    int tor = 269;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=1.997;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void ipace()
{
    char fullname[70]="Jaguar I-Pace EV400";
    int price = 71300;
    int horsepower = 394;
    int topspeed = 124;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 4.5;
    int tor = 512;
    char tort[10]="lb-ft";
    char dis[20] = "Charging Hours";
    float displasc=10;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}


void ftype()
{
    char fullname[70]="Jaguar F-Type P450 AWD AUTOMATIC";
    int price = 77900;
    int horsepower = 444;
    int topspeed = 177;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 4.4;
    int tor = 428;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=5;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}
