#include <stdio.h>
#include <string.h>
#include "cardetails\porschecars.c"

void main()
{
     char audiarr[7][16] = {"Cayenne","911 Carrera","Panamera","Macan","Tayacan","718 Cayman","718 Boxter"};
     char selectaudi[10]; 
     printf("So Here's The List of Porsche Cars we are having\n\n");

     for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {audia3();break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {audis3();break;}
     else if ((selectaudi[0]=='p' || selectaudi[0]=='P') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {audisq7();break;}
     else if ((selectaudi[0]=='m' || selectaudi[0]=='M') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {audiq5();break;}
     else if ((selectaudi[0]=='t' || selectaudi[0]=='T') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {audiq8();break;}
     else if ((selectaudi[0]=='C' || selectaudi[0]=='c') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {audiq7();break;}
     else if ((selectaudi[0]=='b' || selectaudi[0]=='B') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='R')) {audisq8();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}