#include <stdio.h>
#include <string.h>

int main()
{
    printf("Welcome to DRIVEWAY!\nHere, We offer you a comprehensive and a user-friendly platform for you to browse,compare and select your dream car.Our website is designed with your needs in mind, with a wide range of products available from all your dream companies.");

printf("\nBrands we are having are as follows: \n");
    char arr[20][20]={"Audi","Bentley","BMW","Bugatti","Chevrolet","Ferrari","Honda","Jaguar","Kia","Lamborghini","Land Rover","Lexus",
    "Maserati","Mercedes Benz","Porsche","Royal Royace","Tesla","Toyoto","Volkswagon","Volvo"};

    for (int i=0;i<20;i++){
    printf("%d. %s\n",i+1,arr[i]);}
    printf("\nWE have different models of each brand available as per your choice.\n So what's your choice: ");
    char s[100];
    scanf("\n%[^\n]%*c",s);
    int t = strlen(s);
    int m=0;
    if ((s[0]=='A' || s[0]=='a') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Audi\n");m=1;}
    else if ((s[0]=='B' || s[0]=='b') && (s[t-1]=='Y' || s[t-1]=='y')) {printf("\nYou Chose Bentley\n");m=2;}
    else if ((s[0]=='B' || s[0]=='b') && (s[t-2]=='e' || s[t-2]=='E')&& (s[t-1]=='W' || s[t-1]=='w')) {printf("\nYou Chose Bentley\n");m=3;}
    else if ((s[0]=='B' || s[0]=='b') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Bugatti\n");m=4;}
    else if ((s[0]=='C' || s[0]=='c') && (s[t-1]=='T' || s[t-1]=='t')) {printf("\nYou Chose Chevrolet\n");m=5;}
    else if ((s[0]=='F' || s[0]=='f') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Ferrari\n");m=6;}
    else if ((s[0]=='H' || s[0]=='h') && (s[t-1]=='A' || s[t-1]=='a')) {printf("\nYou Chose Honda\n");m=7;}
    else if ((s[0]=='J' || s[0]=='j') && (s[t-1]=='R' || s[t-1]=='r')) {printf("\nYou Chose Jaguar\n");m=8;}
    else if ((s[0]=='K' || s[0]=='k') && (s[t-1]=='a' || s[t-1]=='A')) {printf("\nYou Chose Kia\n");m=9;}
    else if ((s[0]=='L' || s[0]=='l') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Lamborghini\n");m=10;}
    else if ((s[0]=='L' || s[0]=='l') && (s[t-1]=='R' || s[t-1]=='r')) {printf("\nYou Chose Land Rover\n");m=11;}
    else if ((s[0]=='L' || s[0]=='l') && (s[t-1]=='S' || s[t-1]=='s')) {printf("\nYou Chose Lexus\n");m=12;}
    else if ((s[0]=='M' || s[0]=='m') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Maserati\n");m=13;}
    else if ((s[0]=='M' || s[0]=='m') && (s[t-1]=='Z' || s[t-1]=='z')) {printf("\nYou Chose Mercedes Benz\n");m=14;}
    else if ((s[0]=='p' || s[0]=='P') && (s[t-1]=='E' || s[t-1]=='e')) {printf("\nYou Chose porsche\n");m=15;}
    else if ((s[0]=='R' || s[0]=='r') && (s[t-1]=='e' || s[t-1]=='E')) {printf("\nYou chose Royal Royace\n");m=16;}
    else if ((s[0]=='T' || s[0]=='t') && (s[t-1]=='A' || s[t-1]=='a')) {printf("\nYou Chose Tesla\n");m=17;}
    else if ((s[0]=='T' || s[0]=='t') && (s[t-1]=='O' || s[t-1]=='o')) {printf("\nYou Chose Toyoto\n");m=18;}
    else if ((s[0]=='V' || s[0]=='v') && (s[t-1]=='N' || s[t-1]=='n')) {printf("\nYou Chose Volkswagen\n");m=19;}
    else if ((s[0]=='V' || s[0]=='v') && (s[t-1]=='O' || s[t-1]=='o')) {printf("\nYou Chose Volvo\n");m=20;}

    return 0;


}
