#include <stdio.h>
#include <string.h>
#include "cardetails\teslacars.c"

void main()
{
     char audiarr[6][16] = {"Model S","Model 3","Model X","Model Y","Model S Plaid","Model X Plaid"};
     char selectaudi[10]; 
     printf("So Here's The List of Tesla Cars we are having\n\n");

     for (int i=0;i<6;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice (Only Enter Model Say S Plaid):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='S' || selectaudi[0]=='s')) {ms();break;}
     else if ((selectaudi[0]=='3')) {m3();break;}
     else if ((selectaudi[0]=='x' || selectaudi[0]=='X')) {m();break;}
     else if ((selectaudi[0]=='y' || selectaudi[0]=='Y')) {my();break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='s') && (selectaudi[s-1]=='d' || selectaudi[s-1]=='D')) {splaid();break;}
     else if ((selectaudi[0]=='x' || selectaudi[0]=='x') && (selectaudi[s-1]=='d' || selectaudi[s-1]=='D')) {xplaid();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<6;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}