#include <stdio.h>
#include <string.h>
#include "cardetails\kiacars.c"

void main()
{
     char audiarr[8][16] = {"Sportage","Sorento","Carnival","K5","EV6","Telluride","Soul","Niro"};
     char selectaudi[10]; 
     printf("So Here's The List of Audi Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {sportage();break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='o' || selectaudi[s-1]=='O')) {sorento();break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='l' || selectaudi[s-1]=='L')) {carnival();break;}
     else if ((selectaudi[0]=='K' || selectaudi[0]=='k') && (selectaudi[s-1]=='5')) {k5();break;}
     else if ((selectaudi[0]=='e' || selectaudi[0]=='E') && (selectaudi[s-1]=='6' || selectaudi[s-1]=='6')) {ev6();break;}
     else if ((selectaudi[0]=='t' || selectaudi[0]=='T') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {telluride();break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='l' || selectaudi[s-1]=='L')) {soul();break;}
     else if ((selectaudi[0]=='N' || selectaudi[0]=='n') && (selectaudi[s-1]=='o' || selectaudi[s-1]=='o')) {niro();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}