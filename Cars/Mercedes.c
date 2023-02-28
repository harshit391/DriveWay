#include <stdio.h>
#include <string.h>
#include "cardetails\mercedescars.c"

void main()
{
     char audiarr[8][16] = {"GLS","GLE","C-Class","EQS","A-CLass","GLB","CLA","GLA"};
     char selectaudi[10]; 
     printf("So Here's The List of Audi Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice (No Need for - sign):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='g' || selectaudi[0]=='G') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {gls();break;}
     else if ((selectaudi[0]=='g' || selectaudi[0]=='G') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {gle();break;}
     else if ((selectaudi[0]=='C' || selectaudi[0]=='c') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='s')) {cclass();break;}
     else if ((selectaudi[0]=='A' || selectaudi[0]=='a') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {aclass();break;}
     else if ((selectaudi[0]=='e' || selectaudi[0]=='E') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {eqs();break;}
     else if ((selectaudi[0]=='g' || selectaudi[0]=='G') && (selectaudi[s-1]=='b' || selectaudi[s-1]=='B')) {glb();break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {cla();break;}
     else if ((selectaudi[0]=='G' || selectaudi[0]=='g') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {gla();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}