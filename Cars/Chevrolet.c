#include <stdio.h>
#include <string.h>
#include "cardetails\chevroletcars.c"

void main()
{
     char audiarr[7][16] = {"Suburban","Tahoe","Trailblazer","Bolt","Blazer","Silverado","Traverse"};
     char selectaudi[10]; 
     printf("So Here's The List of Audi Cars we are having\n\n");

     for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     

     
     while (1){
        printf("\nSo Whats your choice (Only Enter Model Say A3):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='s' || selectaudi[0]=='s') && (selectaudi[s-1]=='n') || (selectaudi[s-1]=='N')) {suburban();break;}
     else if ((selectaudi[0]=='T' || selectaudi[0]=='t') && (selectaudi[s-1]=='e') || (selectaudi[s-1]=='e') && (selectaudi[s-2]=='s') || (selectaudi[s-1]=='s') || (selectaudi[1]=='s') || (selectaudi[1]=='s') ) {trave();break;}
     else if ((selectaudi[0]=='t' || selectaudi[0]=='T') && (selectaudi[s-1]=='e') || (selectaudi[s-1]=='e')) {tahoe();break;}
     else if ((selectaudi[0]=='t' || selectaudi[0]=='T') && (selectaudi[s-1]=='r') || (selectaudi[s-1]=='r')) {trail();break;}
     else if ((selectaudi[0]=='B' || selectaudi[0]=='b') && (selectaudi[s-1]=='t') || (selectaudi[s-1]=='T')) {bolt();break;}
     else if ((selectaudi[0]=='B' || selectaudi[0]=='b') && (selectaudi[s-1]=='r') || (selectaudi[s-1]=='r')) {blaze();break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='o') || (selectaudi[s-1]=='O')) {silv();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}