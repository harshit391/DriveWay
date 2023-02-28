#include <stdio.h>
#include "specs\displayspecs.c"

void suburban()
{
    char fullname[70]="Chevrolet Suburban High Country RWD";
    int price = 58795;
    int horsepower = 420;
    int topspeed = 154;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 7.2;
    int tor = 460;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6200;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void tahoe()
{
    char fullname[70]="Chevrolet Tahoe High Country RWD";
    int price = 56095;
    int horsepower = 420;
    int topspeed = 124;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 5.8;
    int tor = 460;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6200;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void trail()
{
    char fullname[70]="Chevrolet Trailblazer Active FWD";
    int price = 23395;
    int horsepower = 155;
    int topspeed = 199;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 8.7;
    int tor = 174;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=1.300;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void bolt()
{
    char fullname[70]="Chevrolet Bolt EV 2LT";
    int price = 27495;
    int horsepower = 200;
    int topspeed = 90;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 6.7;
    int tor = 266;
    char tort[10]="lb-ft";
    char dis[20] = "Charging hours";
    float displasc=7.500;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}


void blaze()
{
    char fullname[70]="Chevrolet Blazer RS FWD";
    int price = 36495;
    int horsepower = 308;
    int topspeed = 130;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 6.3;
    int tor = 270;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=3.600;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void silv()
{
    char fullname[70]="Chevrolet Silverado 1500 LTZ Crew Cab Short Bed 2WD";
    int price = 38195;
    int horsepower = 355;
    int topspeed = 125;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 5.4;
    int tor = 383;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=5.3;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void trave()
{
    char fullname[70]="Chevrolet Traverse LTD High Country Crew Cab Short Bed 2WD";
    int price = 32195;
    int horsepower = 355;
    int topspeed = 130;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 6.9;
    int tor = 383;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=5.3;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}


