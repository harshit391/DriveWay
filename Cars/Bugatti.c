#include <stdio.h>
#include <string.h>
#include "cardetails\bugatticars.c"

void main()
{
     char audiarr[5][16] = {"Super Sport 300","Chrion","Divo","Veyron 16.4 EB","Veyron 16.4 GS"};
     char selectaudi[10]; 
     printf("So Here's The List of Audi Cars we are having\n\n");

     for (int i=0;i<5;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     

     
     while (1){
        printf("\nSo Whats your choice (Only Enter The Last word say EB):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='3') && (selectaudi[s-1]=='0')) {supersport300();break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='n') || (selectaudi[s-1]=='N')) {chiron();break;}
     else if ((selectaudi[0]=='D' || selectaudi[0]=='d') && (selectaudi[s-1]=='o') || (selectaudi[s-1]=='O')) {divo();break;}
     else if ((selectaudi[0]=='G' || selectaudi[0]=='g') && (selectaudi[s-1]=='s') || (selectaudi[s-1]=='S')) {gs();break;}
     else if ((selectaudi[0]=='E' || selectaudi[0]=='e') && (selectaudi[s-1]=='b') || (selectaudi[s-1]=='B')) {eb();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<5;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}