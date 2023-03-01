#include <stdio.h>
#include <string.h>
#include "cardetails\bmwcars.c"

void main()
{
     char audiarr[8][16] = {"BMW X1","BMW 7 Series","BMW X7","BMW X5","BMW X6","BMW 4 Series","BMW 2 Series","BMW X3"};
     char selectaudi[10]; 
     printf("So Here's The List of BMW Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     while (1){
        printf("\nSo Whats your choice (Only Enter Model Say X1):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='x' || selectaudi[0]=='X') && (selectaudi[s-1]=='1')) {bmwx1();break;}
     else if ((selectaudi[0]=='X' || selectaudi[0]=='x') && (selectaudi[s-1]=='7')) {bmwx7();break;}
     else if ((selectaudi[0]=='X' || selectaudi[0]=='x') && (selectaudi[s-1]=='5')) {bmwx5();break;}
     else if ((selectaudi[0]=='X' || selectaudi[0]=='x') && (selectaudi[s-1]=='6')) {bmwx6();break;}
     else if ((selectaudi[0]=='X' || selectaudi[0]=='x') && (selectaudi[s-1]=='3')) {bmwx3();break;}
     else if ((selectaudi[0]=='7')) {bmw7();break;}
     else if ((selectaudi[0]=='4')) {bmw4();break;}
     else if ((selectaudi[0]=='2')) {bmw2();break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
}