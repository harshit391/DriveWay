#include <stdio.h>
#include "specs\displayspecs.c"

void splaid()
{
    char fullname[70]="Tesla Model S Plaid";
    int price = 119000;
    int horsepower = 1006;
    int topspeed = 200;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 2.1;
    int tor = 1050;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6.25;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void m3()
{
    char fullname[70]="Tesla Model 3";
    int price = 40000;
    int horsepower = 321;
    int topspeed = 140;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 6.1;
    int tor = 309;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void xplaid()
{
    char fullname[70]="Tesla Model X Plaid";
    int price = 119000;
    int horsepower = 1006;
    int topspeed = 163;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 2.6;
    int tor = 752;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6.25;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void my()
{
    char fullname[70]="Tesla Model Y";
    int price = 42000;
    int horsepower = 456;
    int topspeed = 150;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 3.7;
    int tor = 471;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=7.5;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}


void ms()
{
    char fullname[70]="Tesla Model S";
    int price = 100000;
    int horsepower = 604;
    int topspeed = 155;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration =3.2;
    int tor = 713;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6.5;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void mx()
{
    char fullname[70]="Tesla Model X";
    int price = 120990;
    int horsepower = 604;
    int topspeed = 155;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 3.6;
    int tor = 713;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=6.5;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}
