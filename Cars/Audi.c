#include <stdio.h>
#include <string.h>
#include "cardetails\audicars.c"

void main()
{
     char audiarr[8][16] = {"Audi A3","Audi S3","Audi SQ7","Audi Q5","Audi Q8","Audi Q7","Audi SQ8","Audi A6 Allroad"};
     char selectaudi[10]; 
     printf("So Here's The List of Audi Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice (Only Enter Model Say A3):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='A' || selectaudi[0]=='a') && (selectaudi[s-1]=='3')) {audia3();break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='3')) {audis3();break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='7')) {audisq7();break;}
     else if ((selectaudi[0]=='Q' || selectaudi[0]=='q') && (selectaudi[s-1]=='5')) {audiq5();break;}
     else if ((selectaudi[0]=='q' || selectaudi[0]=='Q') && (selectaudi[s-1]=='8')) {audiq8();break;}
     else if ((selectaudi[0]=='q' || selectaudi[0]=='Q') && (selectaudi[s-1]=='7')) {audiq7();break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='8')) {audisq8();break;}
     else if ((selectaudi[0]=='A' || selectaudi[0]=='a') && (selectaudi[s-1]=='6') || (selectaudi[s-1]=='d' || selectaudi[s-1]=='D')) {audia6allroad();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}