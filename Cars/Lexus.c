#include <stdio.h>
#include <string.h>
#include "cardetails\lexuscars.c"

void main()
{
     char audiarr[8][16] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
     char selectaudi[3]; 
     printf("So Here's The List of Lexus Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='r' || selectaudi[0]=='R') && (selectaudi[s-1]=='x' || selectaudi[s-1]=='X')) {rx();break;}
     else if ((selectaudi[0]=='n' || selectaudi[0]=='N') && (selectaudi[s-1]=='x' || selectaudi[s-1]=='X')) {nx();break;}
     else if ((selectaudi[0]=='L' || selectaudi[0]=='l') && (selectaudi[s-1]=='x' || selectaudi[s-1]=='X')) {lx();break;}
     else if ((selectaudi[0]=='e' || selectaudi[0]=='E') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {es();break;}
     else if ((selectaudi[0]=='u' || selectaudi[0]=='U') && (selectaudi[s-1]=='x' || selectaudi[s-1]=='X')) {ux();break;}
     else if ((selectaudi[0]=='l' || selectaudi[0]=='L') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {ls();break;}
     else if ((selectaudi[0]=='L' || selectaudi[0]=='l') && (selectaudi[s-1]=='c' || selectaudi[s-1]=='C')) {lc();break;}
     else if ((selectaudi[0]=='I' || selectaudi[0]=='i') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {is();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}