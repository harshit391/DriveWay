#include <stdio.h>
#include <string.h>
#include "cardetails\rollsroycecars.c"

void main()
{
     char audiarr[7][16] = {"Phantom","Spectre","Ghost","Cullinan","Wraith","Dawn","Black Badge"};
     char selectaudi[10]; 
     printf("So Here's The List of Rolls Royce Cars we are having\n\n");

     for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='p' || selectaudi[0]=='P') && (selectaudi[s-1]=='m' || selectaudi[s-1]=='M')) {phantom();break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {spectre();break;}
     else if ((selectaudi[0]=='G' || selectaudi[0]=='g') && (selectaudi[s-1]=='t' || selectaudi[s-1]=='T')) {ghost();break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {cullinan();break;}
     else if ((selectaudi[0]=='W' || selectaudi[0]=='w') && (selectaudi[s-1]=='h' || selectaudi[s-1]=='H')) {wraith();break;}
     else if ((selectaudi[0]=='D' || selectaudi[0]=='d') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {dawn();break;}
     else if ((selectaudi[0]=='b' || selectaudi[0]=='B') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {black();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}