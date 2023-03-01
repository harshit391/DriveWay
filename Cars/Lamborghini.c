#include <stdio.h>
#include <string.h>
#include "cardetails\lamborghinicars.c"

void main()
{
     char audiarr[8][16] = {"Aventador SVJ","Huracan Sterrato","Huracan Tecnica","Huracan STO","Huracan Spyder","Urus","Countach","Sian"};
     char selectaudi[10]; 
     printf("So Here's The List of Audi Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice (Only Enter Model Say SVJ):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='j' || selectaudi[s-1]=='J')) {svj();break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='o' || selectaudi[s-1]=='o') && (selectaudi[1]=='t' || selectaudi[1]=='T') && (selectaudi[s-2]=='t' || selectaudi[s-2]=='T')) {sterrato();break;}
     else if ((selectaudi[0]=='T' || selectaudi[0]=='t') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='a')) {tecnica();break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='o' || selectaudi[s-1]=='o')) {sto();break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='R')) {spyder();break;}
     else if ((selectaudi[0]=='u' || selectaudi[0]=='U') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {urus();break;}
     else if ((selectaudi[0]=='C' || selectaudi[0]=='c') && (selectaudi[s-1]=='h' || selectaudi[s-1]=='h')) {countach();break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {sian();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}