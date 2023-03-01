#include <stdio.h>
#include <string.h>
#include "cardetails\hondacars.c"

void main()
{
     char audiarr[8][16] = {"CR-V","Accord","Pilot","Civi","Odyssey","HR-V","Passport","Ridgeline"};
     char selectaudi[10]; 
     printf("So Here's The List of Audi Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice (No need for - sign):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='v' || selectaudi[s-1]=='V')) {crv();break;}
     else if ((selectaudi[0]=='a' || selectaudi[0]=='A') && (selectaudi[s-1]=='d' || selectaudi[s-1]=='D')) {accord();break;}
     else if ((selectaudi[0]=='p' || selectaudi[0]=='P') && (selectaudi[s-1]=='t' || selectaudi[s-1]=='T') && (selectaudi[s-2]=='o' || selectaudi[s-2]=='O') || (selectaudi[1]=='i' || selectaudi[1]=='I') ) {pilot();break;}
     else if ((selectaudi[0]=='C' || selectaudi[0]=='c') && (selectaudi[s-1]=='C' || selectaudi[s-1]=='c')) {civic();break;}
     else if ((selectaudi[0]=='O' || selectaudi[0]=='o') && (selectaudi[s-1]=='y' || selectaudi[s-1]=='Y')) {odyssey();break;}
     else if ((selectaudi[0]=='h' || selectaudi[0]=='H') && (selectaudi[s-1]=='v' || selectaudi[s-1]=='V')) {hrv();break;}
     else if ((selectaudi[0]=='P' || selectaudi[0]=='p') && (selectaudi[s-1]=='t' || selectaudi[s-1]=='T')) {passport();break;}
     else if ((selectaudi[0]=='r' || selectaudi[0]=='R') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {ridgeline();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}