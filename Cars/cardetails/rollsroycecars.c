#include <stdio.h>
#include "specs\displayspecs.c"

void phantom()
{
    char fullname[70]="Rolls Royce Phantom VIII V12 EWB";
    int price = 460000;
    int horsepower = 563;
    int topspeed = 155;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 5.4;
    int tor = 663;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6.749;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void spectre()
{
    char fullname[70]="Rolls Royce Spectre EV";
    int price = 413;
    int horsepower = 577;
    int topspeed = 155;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 4.5;
    int tor = 663;
    char tort[10]="lb-ft";
    char dis[20] = "Charging Hours";
    float displasc=10.75;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void ghost()
{
    char fullname[70]="Rolls Royce Ghost EWB";
    int price = 311900;
    int horsepower = 563;
    int topspeed = 155;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 4.8;
    int tor = 626;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6.592;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void cullinan()
{
    char fullname[70]="Rolls Royce Cullinan	6.6 V12";
    int price = 355000;
    int horsepower = 563;
    int topspeed = 155;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration =5.2;
    int tor = 626;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6.592;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}


void wraith()
{
    char fullname[70]="Rolls Royce Wraith V12";
    int price = 344500;
    int horsepower = 623;
    int topspeed = 155;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 4.6;
    int tor = 590;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6.592;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void dawn()
{
    char fullname[70]="Rolls Royce Dawn V12";
    int price = 359250;
    int horsepower = 563;
    int topspeed = 155;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 4.9;
    int tor = 575;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6.592;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void black()
{
    char fullname[70]="Rolls Royce Black Badge V12";
    int price = 376350;
    int horsepower = 593;
    int topspeed = 155;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 4.9;
    int tor = 619;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6.592;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}