#include <stdio.h>
#include <string.h>
#include "cardetails\maseraticars.c"

void main()
{
     char audiarr[5][16] = {"Grecale","Levante","Ghibli","MC20","Quttroporte"};
     char selectaudi[10]; 
     printf("So Here's The List of Maserati Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='g' || selectaudi[0]=='G') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {grecale();break;}
     else if ((selectaudi[0]=='l' || selectaudi[0]=='L') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {levante();break;}
     else if ((selectaudi[0]=='g' || selectaudi[0]=='G') && (selectaudi[s-1]=='i' || selectaudi[s-1]=='I')) {ghibli();break;}
     else if ((selectaudi[0]=='m' || selectaudi[0]=='M') && (selectaudi[s-1]=='0')) {mc20();break;}
     else if ((selectaudi[0]=='q' || selectaudi[0]=='Q') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {quatt();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<5;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}