#include <stdio.h>
#include <string.h>
#include "CaryouhaveSelected.c"
void welcomedriveway(char firstname[100],char lastname[100],char email[100])
{
    printf("Welcome to DRIVEWAY! %s %s\nHere, We offer you a comprehensive and a user-friendly platform for you to browse,compare and select your dream car.Our website is designed with your needs in mind, with a wide range of products available from all your dream companies.",firstname,lastname);

printf("\n\nBrands we are having are as follows: \n");
    char arr[20][20]={"Audi","Bentley","BMW","Bugatti","Chevrolet","Ferrari","Honda","Jaguar","Kia","Lamborghini","Land Rover","Lexus",
    "Maserati","Mercedes Benz","Porsche","Royal Royace","Tesla","Toyoto","Volkswagon","Volvo"};
char s[100];
int m;
    
    while (1){

    for (int i=0;i<20;i++) printf("%d. %s\n",i+1,arr[i]);
    printf("\n\nWe have different models of each brand available as per your choice.\n So what's your choice: ");
    
    scanf("\n%[^\n]%*c",s);
    int t = strlen(s);

    
    if ((s[0]=='A' || s[0]=='a') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Audi\n");m=1;break;}
    else if ((s[0]=='B' || s[0]=='b') && (s[t-1]=='Y' || s[t-1]=='y')) {printf("\nYou Chose Bentley\n");m=2;break;}
    else if ((s[0]=='B' || s[0]=='b') && (s[t-2]=='e' || s[t-2]=='E')&& (s[t-1]=='W' || s[t-1]=='w')) {printf("\nYou Chose Bentley\n");m=3;break;}
    else if ((s[0]=='B' || s[0]=='b') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Bugatti\n");m=4;break;}
    else if ((s[0]=='C' || s[0]=='c') && (s[t-1]=='T' || s[t-1]=='t')) {printf("\nYou Chose Chevrolet\n");m=5;break;}
    else if ((s[0]=='F' || s[0]=='f') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Ferrari\n");m=6;break;}
    else if ((s[0]=='H' || s[0]=='h') && (s[t-1]=='A' || s[t-1]=='a')) {printf("\nYou Chose Honda\n");m=7;break;}
    else if ((s[0]=='J' || s[0]=='j') && (s[t-1]=='R' || s[t-1]=='r')) {printf("\nYou Chose Jaguar\n");m=8;break;}
    else if ((s[0]=='K' || s[0]=='k') && (s[t-1]=='a' || s[t-1]=='A')) {printf("\nYou Chose Kia\n");m=9;break;}
    else if ((s[0]=='L' || s[0]=='l') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Lamborghini\n");m=10;break;}
    else if ((s[0]=='L' || s[0]=='l') && (s[t-1]=='R' || s[t-1]=='r')) {printf("\nYou Chose Land Rover\n");m=11;break;}
    else if ((s[0]=='L' || s[0]=='l') && (s[t-1]=='S' || s[t-1]=='s')) {printf("\nYou Chose Lexus\n");m=12;break;}
    else if ((s[0]=='M' || s[0]=='m') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Maserati\n");m=13;break;}
    else if ((s[0]=='M' || s[0]=='m') && (s[t-1]=='Z' || s[t-1]=='z')) {printf("\nYou Chose Mercedes Benz\n");m=14;break;}
    else if ((s[0]=='p' || s[0]=='P') && (s[t-1]=='E' || s[t-1]=='e')) {printf("\nYou Chose porsche\n");m=15;break;}
    else if ((s[0]=='R' || s[0]=='r') && (s[t-1]=='e' || s[t-1]=='E')) {printf("\nYou chose Royal Royace\n");m=16;break;}
    else if ((s[0]=='T' || s[0]=='t') && (s[t-1]=='A' || s[t-1]=='a')) {printf("\nYou Chose Tesla\n");m=17;break;}
    else if ((s[0]=='T' || s[0]=='t') && (s[t-1]=='O' || s[t-1]=='o')) {printf("\nYou Chose Toyoto\n");m=18;break;}
    else if ((s[0]=='V' || s[0]=='v') && (s[t-1]=='N' || s[t-1]=='n')) {printf("\nYou Chose Volkswagen\n");m=19;break;}
    else if ((s[0]=='V' || s[0]=='v') && (s[t-1]=='O' || s[t-1]=='o')) {printf("\nYou Chose Volvo\n");m=20;break;}
    else {
        printf("\nI think you entered wrong spelling\nOr We don't have the car\nPlease Enter Car with correct Spellings with List Given Below:- \n");
        continue;
    }
    }
    carselected(m,firstname,lastname,email);
}
