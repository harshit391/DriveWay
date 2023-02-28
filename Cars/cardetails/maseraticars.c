#include <stdio.h>
#include "specs\displayspecs.c"

void grecale()
{
    char fullname[70]="Maserati Grecale GT";
    int price = 63500;
    int horsepower = 300;
    int topspeed = 240;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 5.6;
    int tor = 450;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=2.995;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void levante()
{
    char fullname[70]="Maserati Levante Trofeo";
    int price =   90700;
    int horsepower = 580;
    int topspeed = 302;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 4.1;
    int tor = 730;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=3.799;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void ghibli()
{
    char fullname[70]="Maserati Ghibli Trofeo";
    int price = 85300;
    int horsepower = 570;
    int topspeed = 326;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 4.3;
    int tor = 730;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=3.799;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}

void mc20()
{
    char fullname[70]="Maserati MC20 Cielo";
    int price = 250000;
    int horsepower = 630;
    int topspeed = 320;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 2.8;
    int tor = 730;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=3;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}


void quatt()
{
    char fullname[70]="Maserati Quattroporte Trofeo";
    int price = 145900;
    int horsepower = 580;
    int topspeed = 326;
    char topsp[4]="mph";
    char accet[30]="0 to 60 mph in seconds";
    float acceleration = 4.5;
    int tor = 730;
    char tort[10]="lb-ft";
    char dis[10] = "CC";
    float displasc=3.799;
    displayspecofcar(fullname,price,horsepower,topspeed,topsp,acceleration,accet,tor,tort,displasc,dis);
}
