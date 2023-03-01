#include <stdio.h>
#include <string.h>
#include "cardetails\landrovercars.c"

void main()
{
     char audiarr[6][20] = {"Range Rover Sport","Defender","Discovery","Range Rover","Range Rover Evoque","Range Rover Velar"};
     char selectaudi[10]; 
     printf("So Here's The List of Land Rover Cars we are having\n\n");

     for (int i=0;i<6;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice (Only Enter Last name say Sport):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='t' || selectaudi[s-1]=='T')) {sport();break;}
     else if ((selectaudi[0]=='D' || selectaudi[0]=='d') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='R')) {defender();break;}
     else if ((selectaudi[0]=='r' || selectaudi[0]=='R') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='r')) {se();break;}
     else if ((selectaudi[0]=='e' || selectaudi[0]=='E') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {evoque();break;}
     else if ((selectaudi[0]=='v' || selectaudi[0]=='V') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='R')) {velar();break;}
     else if ((selectaudi[0]=='d' || selectaudi[0]=='D') && (selectaudi[s-1]=='y' || selectaudi[s-1]=='y')) {discovery();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<6;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}