#include <stdio.h>
#include "AllCars.c"

int main()
{
    char audicarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char bentlycarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char bmwcarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char bugatticarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char chevroletcarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char ferraricarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char hondacarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char jaguarcarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char kiacarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char lamborghinicarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char landrovercarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char lexuscarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char maseraticarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char mercedescarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char porschecarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char royalroycecarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char teslacarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char toyotocarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char volkswagoncarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    char volvocarlist[8][100] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
    // int m,y;
    // scanf("%d",&m);
    
    int y;
    while (1)
    {
        y = mercedes();
        if (y==-2) break;
        else if (y==-1) continue;
        else {printf("%d",y);break;}
    }
}