#include <stdio.h>
#include <string.h>
#include "cardetails\bentleycars.c"

void main()
{
     char audiarr[7][25] = {"Bentayga EWB","Bentayga Speed","Flying Spur Azure","Flying Spur Odyssean","Continental GT","Continental GT S","Continental GTC"};
     char selectaudi[10]; 
     printf("\nSo Here's The List of Bentley Cars we are having\n\n");

     for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     

     
     while (1){
        printf("\nSo Whats your choice (Only Enter Last Word say EWD):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='E' || selectaudi[0]=='e') && (selectaudi[s-1]=='b') || (selectaudi[s-1]=='B')) {bentleyewb();break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='d') || (selectaudi[s-1]=='d')) {bentleyspeed();break;}
     else if ((selectaudi[0]=='a' || selectaudi[0]=='A') && (selectaudi[s-1]=='e') || (selectaudi[s-1]=='e')) {flyingspurazure();break;}
     else if ((selectaudi[0]=='O' || selectaudi[0]=='o') && (selectaudi[s-1]=='n') || (selectaudi[s-1]=='n')) {flyingspurodyssean();break;}
     else if ((selectaudi[0]=='G' || selectaudi[0]=='g') && (selectaudi[s-1]=='T') || (selectaudi[s-1]=='t')) {continentalgt();break;}
     else if ((selectaudi[0]=='G' || selectaudi[0]=='g') && (selectaudi[s-1]=='s') || (selectaudi[s-1]=='S')) {continentalgts();break;}
     else if ((selectaudi[0]=='G' || selectaudi[0]=='g') && (selectaudi[s-1]=='c') || (selectaudi[s-1]=='c')) {continentalgtc();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}