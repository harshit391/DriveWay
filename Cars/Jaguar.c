#include <stdio.h>
#include <string.h>
#include "cardetails\jaguarcars.c"

void main()
{
     char audiarr[5][16] = {"XF","E-Pace","F-Pace","I-Pace","F-Type"};
     char selectaudi[10]; 
     printf("So Here's The List of Audi Cars we are having\n\n");

     for (int i=0;i<5;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice (No Need for - sign):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
    if ((selectaudi[0]=='x' || selectaudi[0]=='X') && (selectaudi[s-1]=='f' || selectaudi[s-1]=='F')) {xf();break;}
     else if ((selectaudi[0]=='e' || selectaudi[0]=='E') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='e')) {epace();break;}
     else if ((selectaudi[0]=='f' || selectaudi[0]=='F') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E') && (selectaudi[s-2]=='c' || selectaudi[s-2]=='C')) {fpace();break;}
     else if ((selectaudi[0]=='i' || selectaudi[0]=='I') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {ipace();break;}
     else if ((selectaudi[0]=='f' || selectaudi[0]=='f') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='e')) {ftype();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<5;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}