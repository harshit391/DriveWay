#include <stdio.h>
#include <string.h>
#include "cardetails\ferraricars.c"

void main()
{
     char audiarr[8][16] = {"812 GTS","296 GTB","296 GTS","SF90 Spider","F8 Tributo","F8 Spider","Roma","Portfino M"};
     char selectaudi[10]; 
     printf("So Here's The List of Audi Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     

     
     while (1){
        printf("\nSo Whats your choice (Please Enter Full Name say 812 GTS):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='8') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {gts812();break;}
     else if ((selectaudi[0]=='2') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='s')) {gts296();break;}
     else if ((selectaudi[0]=='2') && (selectaudi[s-1]=='b' || selectaudi[s-1]=='B')) {gtb296();break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='r') || (selectaudi[s-1]=='0' || selectaudi[s-1]=='0')) {sf90();break;}
     else if ((selectaudi[0]=='F' || selectaudi[0]=='f') && (selectaudi[s-1]=='O' || selectaudi[s-1]=='o')) {f8tri();break;}
     else if ((selectaudi[0]=='F' || selectaudi[0]=='f') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='r')) {f8spi();break;}
     else if ((selectaudi[0]=='r' || selectaudi[0]=='R') && (selectaudi[s-1]=='o' || selectaudi[s-1]=='O')) {roma();break;}
     else if ((selectaudi[0]=='P' || selectaudi[0]=='p') && (selectaudi[s-1]=='o' || selectaudi[s-1]=='o') || (selectaudi[s-1]=='m' || selectaudi[s-1]=='M')) {portfi();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}