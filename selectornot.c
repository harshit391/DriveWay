#include <stdio.h>
#include <string.h>

int selectornot()
{
    int m=0;
    while(1)
    {
        
        printf("So Can we Proceed to The Booking! (Enter Yes or No):- ");
        char k[3];scanf("\n%[^\n]%*c",k);
        int le = strlen(k);

        if (k[0]=='Y' || k[0]=='y') {m=1;break;}
        else if (k[0]=='N' || k[0]=='n') {m=0;break;}
        else {
            printf("Please Enter Yes or No Only\n");
            continue;
        } 
    }
    return m;
}

int proceedorback()
{
    int m=0;
    while(1)
    {
        char k[3];scanf("\n%[^\n]%*c",k);
        int le = strlen(k);

        if (k[0]=='Y' || k[0]=='y') {m=1;break;}
        else if (k[0]=='N' || k[0]=='n') {m=0;break;}
        else {
            printf("Please Enter Yes or No Only\n");
            continue;
        } 
    }
    return m;
}