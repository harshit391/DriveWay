#include <stdio.h>
#include <string.h>
#include "cardetails\toyotocars.c"

void main()
{
     char audiarr[8][16] = {"Sequoia","Highlander","Sienna","Tundra","Rav 4 Prime","Corolla","Venza","Camry"};
     char selectaudi[10]; 
     printf("So Here's The List of Toyoto Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='H' || selectaudi[0]=='h') && (selectaudi[s-1]=='R' || selectaudi[s-1]=='r')) {highlander();break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='a') && (selectaudi[s-2]=='I' || selectaudi[s-2]=='i')) {sequoia();break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {sienna();break;}
     else if ((selectaudi[0]=='t' || selectaudi[0]=='T') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {tundra();break;}
     else if ((selectaudi[0]=='R' || selectaudi[0]=='r') || (selectaudi[0]=='P' || selectaudi[0]=='p') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='e')) {prime();break;}
     else if ((selectaudi[0]=='C' || selectaudi[0]=='c') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {corolla();break;}
     else if ((selectaudi[0]=='v' || selectaudi[0]=='V') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {venza();break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='y' || selectaudi[s-1]=='Y')) {camry();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}