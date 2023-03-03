#include <stdio.h>
#include <string.h>
#include "CarDetails.c"
#include "selectornot.c"

int audi()
{
     char audiarr[8][16] = {"Audi A3","Audi S3","Audi SQ7","Audi Q5","Audi Q8","Audi Q7","Audi SQ8","Audi A6 Allroad"};
     char selectaudi[10]; 
     printf("So Here's The List of Audi Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (Only Enter Model Say A3):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='A' || selectaudi[0]=='a') && (selectaudi[s-1]=='3')) {audia3();carnum=1;break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='3')) {audis3();carnum=2;break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='7')) {audisq7();carnum=3;break;}
     else if ((selectaudi[0]=='Q' || selectaudi[0]=='q') && (selectaudi[s-1]=='5')) {audiq5();carnum=4;break;}
     else if ((selectaudi[0]=='q' || selectaudi[0]=='Q') && (selectaudi[s-1]=='8')) {audiq8();carnum=5;break;}
     else if ((selectaudi[0]=='q' || selectaudi[0]=='Q') && (selectaudi[s-1]=='7')) {audiq7();carnum=6;break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='8')) {audisq8();carnum=7;break;}
     else if ((selectaudi[0]=='A' || selectaudi[0]=='a') && (selectaudi[s-1]=='6') || (selectaudi[s-1]=='d' || selectaudi[s-1]=='D')) {audia6allroad();carnum=8;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}

     int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }
}

int bentley()
{
     char audiarr[7][25] = {"Bentayga EWB","Bentayga Speed","Flying Spur Azure","Flying Spur Odyssean","Continental GT","Continental GT S","Continental GTC"};
     char selectaudi[10]; 
     printf("\nSo Here's The List of Bentley Cars we are having\n\n");

     for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     

     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (Only Enter Last Word say EWD):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='E' || selectaudi[0]=='e') && (selectaudi[s-1]=='b') || (selectaudi[s-1]=='B')) {bentleyewb();carnum=1;break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='d') || (selectaudi[s-1]=='d')) {bentleyspeed();carnum=2;break;}
     else if ((selectaudi[0]=='a' || selectaudi[0]=='A') && (selectaudi[s-1]=='e') || (selectaudi[s-1]=='e')) {flyingspurazure();carnum=3;break;}
     else if ((selectaudi[0]=='O' || selectaudi[0]=='o') && (selectaudi[s-1]=='n') || (selectaudi[s-1]=='n')) {flyingspurodyssean();carnum=4;break;}
     else if ((selectaudi[0]=='G' || selectaudi[0]=='g') && (selectaudi[s-1]=='T') || (selectaudi[s-1]=='t')) {continentalgt();carnum=5;break;}
     else if ((selectaudi[0]=='G' || selectaudi[0]=='g') && (selectaudi[s-1]=='s') || (selectaudi[s-1]=='S')) {continentalgts();carnum=6;break;}
     else if ((selectaudi[0]=='G' || selectaudi[0]=='g') && (selectaudi[s-1]=='c') || (selectaudi[s-1]=='c')) {continentalgtc();carnum=7;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int bmw()
{
     char audiarr[8][16] = {"BMW X1","BMW 7 Series","BMW X7","BMW X5","BMW X6","BMW 4 Series","BMW 2 Series","BMW X3"};
     char selectaudi[10]; 
     printf("So Here's The List of BMW Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (Only Enter Model Say X1):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='x' || selectaudi[0]=='X') && (selectaudi[s-1]=='1')) {bmwx1();carnum=1;break;}
     else if ((selectaudi[0]=='X' || selectaudi[0]=='x') && (selectaudi[s-1]=='7')) {bmwx7();carnum=3;break;}
     else if ((selectaudi[0]=='X' || selectaudi[0]=='x') && (selectaudi[s-1]=='5')) {bmwx5();carnum=4;break;}
     else if ((selectaudi[0]=='X' || selectaudi[0]=='x') && (selectaudi[s-1]=='6')) {bmwx6();carnum=5;break;}
     else if ((selectaudi[0]=='X' || selectaudi[0]=='x') && (selectaudi[s-1]=='3')) {bmwx3();carnum=8;break;}
     else if ((selectaudi[0]=='7')) {bmw7();carnum=2;break;}
     else if ((selectaudi[0]=='4')) {bmw4();carnum=6;break;}
     else if ((selectaudi[0]=='2')) {bmw2();carnum=7;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int bugatti()
{
     char audiarr[5][16] = {"Super Sport 300","Chrion","Divo","Veyron 16.4 EB","Veyron 16.4 GS"};
     char selectaudi[10]; 
     printf("So Here's The List of Bugatti Cars we are having\n\n");

     for (int i=0;i<5;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     

     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (Only Enter The Last word say EB):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='3') && (selectaudi[s-1]=='0')) {bugattisupersport300();carnum=1;break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='n') || (selectaudi[s-1]=='N')) {bugattichiron();carnum=2;break;}
     else if ((selectaudi[0]=='D' || selectaudi[0]=='d') && (selectaudi[s-1]=='o') || (selectaudi[s-1]=='O')) {bugattidivo();carnum=3;break;}
     else if ((selectaudi[0]=='G' || selectaudi[0]=='g') && (selectaudi[s-1]=='s') || (selectaudi[s-1]=='S')) {bugattigs();carnum=5;break;}
     else if ((selectaudi[0]=='E' || selectaudi[0]=='e') && (selectaudi[s-1]=='b') || (selectaudi[s-1]=='B')) {bugattieb();carnum=4;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<5;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int chevrolet()
{
     char audiarr[7][16] = {"Suburban","Tahoe","Trailblazer","Bolt","Blazer","Silverado","Traverse"};
     char selectaudi[10]; 
     printf("So Here's The List of Chevrolet Cars we are having\n\n");

     for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     

     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='s' || selectaudi[0]=='s') && (selectaudi[s-1]=='n') || (selectaudi[s-1]=='N')) {chevroletsuburban();carnum=1;break;}
     else if ((selectaudi[0]=='T' || selectaudi[0]=='t') && (selectaudi[s-1]=='e') || (selectaudi[s-1]=='e') && (selectaudi[s-2]=='s') || (selectaudi[s-1]=='s') || (selectaudi[1]=='s') || (selectaudi[1]=='s') ) {chevrolettrave();carnum=8;break;}
     else if ((selectaudi[0]=='t' || selectaudi[0]=='T') && (selectaudi[s-1]=='e') || (selectaudi[s-1]=='e')) {chevrolettahoe();carnum=2;break;}
     else if ((selectaudi[0]=='t' || selectaudi[0]=='T') && (selectaudi[s-1]=='r') || (selectaudi[s-1]=='r')) {chevrolettrail();carnum=3;break;}
     else if ((selectaudi[0]=='B' || selectaudi[0]=='b') && (selectaudi[s-1]=='t') || (selectaudi[s-1]=='T')) {chevroletbolt();carnum=4;break;}
     else if ((selectaudi[0]=='B' || selectaudi[0]=='b') && (selectaudi[s-1]=='r') || (selectaudi[s-1]=='r')) {chevroletblaze();carnum=5;break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='o') || (selectaudi[s-1]=='O')) {chevroletsilv();carnum=6;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int ferrari()
{
     char audiarr[8][16] = {"812 GTS","296 GTB","296 GTS","SF90 Spider","F8 Tributo","F8 Spider","Roma","Portfino M"};
     char selectaudi[10]; 
     printf("So Here's The List of Ferrari Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     

     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (Please Enter Full Name say 812 GTS):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='8') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {ferrarigts812();carnum=1;break;}
     else if ((selectaudi[0]=='2') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='s')) {ferrarigts296();carnum=3;break;}
     else if ((selectaudi[0]=='2') && (selectaudi[s-1]=='b' || selectaudi[s-1]=='B')) {ferrarigtb296();carnum=2;break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='r') || (selectaudi[s-1]=='0' || selectaudi[s-1]=='0')) {ferrarisf90();carnum=4;break;}
     else if ((selectaudi[0]=='F' || selectaudi[0]=='f') && (selectaudi[s-1]=='O' || selectaudi[s-1]=='o')) {ferrarif8tri();carnum=5;break;}
     else if ((selectaudi[0]=='F' || selectaudi[0]=='f') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='r')) {ferrarif8spi();carnum=6;break;}
     else if ((selectaudi[0]=='r' || selectaudi[0]=='R') && (selectaudi[s-1]=='o' || selectaudi[s-1]=='O')) {ferrariroma();carnum=7;break;}
     else if ((selectaudi[0]=='P' || selectaudi[0]=='p') && (selectaudi[s-1]=='o' || selectaudi[s-1]=='o') || (selectaudi[s-1]=='m' || selectaudi[s-1]=='M')) {ferrariportfi();carnum=8;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int honda()
{
     char audiarr[8][16] = {"CR-V","Accord","Pilot","Civi","Odyssey","HR-V","Passport","Ridgeline"};
     char selectaudi[10]; 
     printf("So Here's The List of Honda Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (No need for - sign):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='v' || selectaudi[s-1]=='V')) {hondacrv();carnum=1;break;}
     else if ((selectaudi[0]=='a' || selectaudi[0]=='A') && (selectaudi[s-1]=='d' || selectaudi[s-1]=='D')) {hondaaccord();carnum=2;break;}
     else if ((selectaudi[0]=='p' || selectaudi[0]=='P') && (selectaudi[s-1]=='t' || selectaudi[s-1]=='T') && (selectaudi[s-2]=='o' || selectaudi[s-2]=='O') || (selectaudi[1]=='i' || selectaudi[1]=='I') ) {hondapilot();carnum=3;break;}
     else if ((selectaudi[0]=='C' || selectaudi[0]=='c') && (selectaudi[s-1]=='C' || selectaudi[s-1]=='c')) {hondacivic();carnum=4;break;}
     else if ((selectaudi[0]=='O' || selectaudi[0]=='o') && (selectaudi[s-1]=='y' || selectaudi[s-1]=='Y')) {hondaodyssey();carnum=5;break;}
     else if ((selectaudi[0]=='h' || selectaudi[0]=='H') && (selectaudi[s-1]=='v' || selectaudi[s-1]=='V')) {hondahrv();carnum=6;break;}
     else if ((selectaudi[0]=='P' || selectaudi[0]=='p') && (selectaudi[s-1]=='t' || selectaudi[s-1]=='T')) {hondapassport();carnum=7;break;}
     else if ((selectaudi[0]=='r' || selectaudi[0]=='R') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {hondaridgeline();carnum=8;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int jaguar()
{
     char audiarr[5][16] = {"XF","E-Pace","F-Pace","I-Pace","F-Type"};
     char selectaudi[10]; 
     printf("So Here's The List of Jaguar Cars we are having\n\n");

     for (int i=0;i<5;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (No Need for - sign):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
    if ((selectaudi[0]=='x' || selectaudi[0]=='X') && (selectaudi[s-1]=='f' || selectaudi[s-1]=='F')) {jaguarxf();carnum=1;break;}
     else if ((selectaudi[0]=='e' || selectaudi[0]=='E') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='e')) {jaguarepace();carnum=2;break;}
     else if ((selectaudi[0]=='f' || selectaudi[0]=='F') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E') && (selectaudi[s-2]=='c' || selectaudi[s-2]=='C')) {jaguarfpace();carnum=3;break;}
     else if ((selectaudi[0]=='i' || selectaudi[0]=='I') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {jaguaripace();carnum=4;break;}
     else if ((selectaudi[0]=='f' || selectaudi[0]=='f') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='e')) {jaguarftype();carnum=5;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<5;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int kia()
{
     char audiarr[8][16] = {"Sportage","Sorento","Carnival","K5","EV6","Telluride","Soul","Niro"};
     char selectaudi[10]; 
     printf("So Here's The List of Kia Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {kiasportage();carnum=1;break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='o' || selectaudi[s-1]=='O')) {kiasorento();carnum=2;break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='l' || selectaudi[s-1]=='L')) {kiacarnival();carnum=3;break;}
     else if ((selectaudi[0]=='K' || selectaudi[0]=='k') && (selectaudi[s-1]=='5')) {kiak5();carnum=4;break;}
     else if ((selectaudi[0]=='e' || selectaudi[0]=='E') && (selectaudi[s-1]=='6' || selectaudi[s-1]=='6')) {kiaev6();carnum=5;break;}
     else if ((selectaudi[0]=='t' || selectaudi[0]=='T') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {kiatelluride();carnum=6;break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='l' || selectaudi[s-1]=='L')) {kiasoul();carnum=7;break;}
     else if ((selectaudi[0]=='N' || selectaudi[0]=='n') && (selectaudi[s-1]=='o' || selectaudi[s-1]=='o')) {kianiro();carnum=8;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int lamborghini()
{
     char audiarr[8][16] = {"Aventador SVJ","Huracan Sterrato","Huracan Tecnica","Huracan STO","Huracan Spyder","Urus","Countach","Sian"};
     char selectaudi[10]; 
     printf("So Here's The List of Lamborghini Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (Only Enter Model Say SVJ):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='j' || selectaudi[s-1]=='J')) {lamborghinisvj();carnum=1;break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='o' || selectaudi[s-1]=='o') && (selectaudi[1]=='t' || selectaudi[1]=='T') && (selectaudi[s-2]=='t' || selectaudi[s-2]=='T')) {lamborghinisterrato();carnum=2;break;}
     else if ((selectaudi[0]=='T' || selectaudi[0]=='t') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='a')) {lamborghinitecnica();carnum=3;break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='o' || selectaudi[s-1]=='o')) {lamborghinisto();carnum=4;break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='R')) {lamborghinispyder();carnum=5;break;}
     else if ((selectaudi[0]=='u' || selectaudi[0]=='U') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {lamborghiniurus();carnum=6;break;}
     else if ((selectaudi[0]=='C' || selectaudi[0]=='c') && (selectaudi[s-1]=='h' || selectaudi[s-1]=='h')) {lamborghinicountach();carnum=7;break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {lamborghinisian();carnum=8;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}

     int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }
}

int landrover()
{
     char audiarr[6][20] = {"Range Rover Sport","Defender","Discovery","Range Rover","Range Rover Evoque","Range Rover Velar"};
     char selectaudi[10]; 
     printf("So Here's The List of Land Rover Cars we are having\n\n");

     for (int i=0;i<6;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (Only Enter Last name say Sport):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[s-1]=='t' || selectaudi[s-1]=='T')) {landroversport();carnum=1;break;}
     else if ((selectaudi[0]=='D' || selectaudi[0]=='d') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='R')) {landroverdefender();carnum=2;break;}
     else if ((selectaudi[0]=='r' || selectaudi[0]=='R') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='r')) {landroverse();carnum=3;break;}
     else if ((selectaudi[0]=='e' || selectaudi[0]=='E') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {landroverevoque();carnum=4;break;}
     else if ((selectaudi[0]=='v' || selectaudi[0]=='V') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='R')) {landrovervelar();carnum=5;break;}
     else if ((selectaudi[0]=='d' || selectaudi[0]=='D') && (selectaudi[s-1]=='y' || selectaudi[s-1]=='y')) {landroverdiscovery();carnum=6;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<6;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }
}

int lexus()
{
     char audiarr[8][16] = {"RX","NX","LX","ES","UX","LS","LC","IS"};
     char selectaudi[3]; 
     printf("So Here's The List of Lexus Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='r' || selectaudi[0]=='R') && (selectaudi[s-1]=='x' || selectaudi[s-1]=='X')) {lexusrx();carnum=1;break;}
     else if ((selectaudi[0]=='n' || selectaudi[0]=='N') && (selectaudi[s-1]=='x' || selectaudi[s-1]=='X')) {lexusnx();carnum=2;break;}
     else if ((selectaudi[0]=='L' || selectaudi[0]=='l') && (selectaudi[s-1]=='x' || selectaudi[s-1]=='X')) {lexuslx();carnum=3;break;}
     else if ((selectaudi[0]=='e' || selectaudi[0]=='E') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {lexuses();carnum=4;break;}
     else if ((selectaudi[0]=='u' || selectaudi[0]=='U') && (selectaudi[s-1]=='x' || selectaudi[s-1]=='X')) {lexusux();carnum=5;break;}
     else if ((selectaudi[0]=='l' || selectaudi[0]=='L') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {lexusls();carnum=6;break;}
     else if ((selectaudi[0]=='L' || selectaudi[0]=='l') && (selectaudi[s-1]=='c' || selectaudi[s-1]=='C')) {lexuslc();carnum=7;break;}
     else if ((selectaudi[0]=='I' || selectaudi[0]=='i') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {lexusis();carnum=8;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int maserati()
{
     char audiarr[5][16] = {"Grecale","Levante","Ghibli","MC20","Quttroporte"};
     char selectaudi[10]; 
     printf("So Here's The List of Maserati Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='g' || selectaudi[0]=='G') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {maseratigrecale();carnum=1;break;}
     else if ((selectaudi[0]=='l' || selectaudi[0]=='L') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {maseratilevante();carnum=2;break;}
     else if ((selectaudi[0]=='g' || selectaudi[0]=='G') && (selectaudi[s-1]=='i' || selectaudi[s-1]=='I')) {maseratighibli();carnum=3;break;}
     else if ((selectaudi[0]=='m' || selectaudi[0]=='M') && (selectaudi[s-1]=='0')) {maseratimc20();carnum=4;break;}
     else if ((selectaudi[0]=='q' || selectaudi[0]=='Q') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {maseratiquatt();carnum=5;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<5;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int mercedes()
{
     char audiarr[8][16] = {"GLS","GLE","C-Class","EQS","A-CLass","GLB","CLA","GLA"};
     char selectaudi[10]; 
     printf("So Here's The List of Mercedes Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (No Need for - sign):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='g' || selectaudi[0]=='G') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {mercedesgls();carnum=1;break;}
     else if ((selectaudi[0]=='g' || selectaudi[0]=='G') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {mercedesgle();carnum=2;break;}
     else if ((selectaudi[0]=='C' || selectaudi[0]=='c') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='s')) {mercedescclass();carnum=3;break;}
     else if ((selectaudi[0]=='A' || selectaudi[0]=='a') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {mercedesaclass();carnum=5;break;}
     else if ((selectaudi[0]=='e' || selectaudi[0]=='E') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {mercedeseqs();carnum=4;break;}
     else if ((selectaudi[0]=='g' || selectaudi[0]=='G') && (selectaudi[s-1]=='b' || selectaudi[s-1]=='B')) {mercedesglb();carnum=6;break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {mercedescla();carnum=7;break;}
     else if ((selectaudi[0]=='G' || selectaudi[0]=='g') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {mercedesgla();carnum=8;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return -1;
      else return -2;
     }}

int porsche()
{
     char audiarr[7][16] = {"Cayenne","911 Carrera","Panamera","Macan","Tayacan","718 Cayman","718 Boxter"};
     char selectaudi[10]; 
     printf("So Here's The List of Porsche Cars we are having\n\n");

     for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {porschecayenne();carnum=1;break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {porschecarrera();carnum=2;break;}
     else if ((selectaudi[0]=='p' || selectaudi[0]=='P') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {porschepanamera();carnum=3;break;}
     else if ((selectaudi[0]=='m' || selectaudi[0]=='M') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {porschemacan();carnum=4;break;}
     else if ((selectaudi[0]=='t' || selectaudi[0]=='T') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {porschetayacan();carnum=5;break;}
     else if ((selectaudi[0]=='C' || selectaudi[0]=='c') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {proschecayman();carnum=6;break;}
     else if ((selectaudi[0]=='b' || selectaudi[0]=='B') && (selectaudi[s-1]=='r' || selectaudi[s-1]=='R')) {porscheboxter();carnum=7;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int rollsroyce()
{
     char audiarr[7][16] = {"Phantom","Spectre","Ghost","Cullinan","Wraith","Dawn","Black Badge"};
     char selectaudi[10]; 
     printf("So Here's The List of Rolls Royce Cars we are having\n\n");

     for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='p' || selectaudi[0]=='P') && (selectaudi[s-1]=='m' || selectaudi[s-1]=='M')) {rollsroycephantom();carnum=1;break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {rollsroycespectre();carnum=2;break;}
     else if ((selectaudi[0]=='G' || selectaudi[0]=='g') && (selectaudi[s-1]=='t' || selectaudi[s-1]=='T')) {rollsroyceghost();carnum=3;break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {rollsroycecullinan();carnum=4;break;}
     else if ((selectaudi[0]=='W' || selectaudi[0]=='w') && (selectaudi[s-1]=='h' || selectaudi[s-1]=='H')) {rollsroycewraith();carnum=5;break;}
     else if ((selectaudi[0]=='D' || selectaudi[0]=='d') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {rollsroycedawn();carnum=6;break;}
     else if ((selectaudi[0]=='b' || selectaudi[0]=='B') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='E')) {rollsroyceblack();carnum=7;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<7;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int tesla()
{
     char audiarr[6][16] = {"Model S","Model 3","Model X","Model Y","Model S Plaid","Model X Plaid"};
     char selectaudi[10]; 
     printf("So Here's The List of Tesla Cars we are having\n\n");

     for (int i=0;i<6;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (Only Enter Model Say S Plaid):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='S' || selectaudi[0]=='s')) {teslams();carnum=1;break;}
     else if ((selectaudi[0]=='3')) {teslam3();carnum=2;break;}
     else if ((selectaudi[0]=='x' || selectaudi[0]=='X')) {teslamx();carnum=3;break;}
     else if ((selectaudi[0]=='y' || selectaudi[0]=='Y')) {teslamy();carnum=4;break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='s') && (selectaudi[s-1]=='d' || selectaudi[s-1]=='D')) {teslasplaid();carnum=5;break;}
     else if ((selectaudi[0]=='x' || selectaudi[0]=='x') && (selectaudi[s-1]=='d' || selectaudi[s-1]=='D')) {teslaxplaid();carnum=6;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<6;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int toyoto()
{
     char audiarr[8][16] = {"Sequoia","Highlander","Sienna","Tundra","Rav 4 Prime","Corolla","Venza","Camry"};
     char selectaudi[10]; 
     printf("So Here's The List of Toyoto Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice:- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='H' || selectaudi[0]=='h') && (selectaudi[s-1]=='R' || selectaudi[s-1]=='r')) {toyotohighlander();carnum=2;break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='a') && (selectaudi[s-2]=='I' || selectaudi[s-2]=='i')) {toyotosequoia();carnum=1;break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {toyotosienna();carnum=3;break;}
     else if ((selectaudi[0]=='t' || selectaudi[0]=='T') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {toyototundra();carnum=4;break;}
     else if ((selectaudi[0]=='R' || selectaudi[0]=='r') || (selectaudi[0]=='P' || selectaudi[0]=='p') && (selectaudi[s-1]=='e' || selectaudi[s-1]=='e')) {toyotoprime();carnum=5;break;}
     else if ((selectaudi[0]=='C' || selectaudi[0]=='c') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {toyotocorolla();carnum=6;break;}
     else if ((selectaudi[0]=='v' || selectaudi[0]=='V') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {toyotovenza();carnum=7;break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='y' || selectaudi[s-1]=='Y')) {toyotocamry();carnum=8;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int volkswagon()
{
     char audiarr[8][30] = {"Golf GTI","Golf R","Taos","Jetta","Atlas Cross Sport","Arteon","Atlas","Tiguan"};
     char selectaudi[10]; 
     printf("So Here's The List of Volkswagon Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (Only Enter Last Word say Sport):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='r' || selectaudi[0]=='R')) {volkswagonr();carnum=2;break;}
     else if ((selectaudi[0]=='g' || selectaudi[0]=='G') && (selectaudi[s-1]=='i' || selectaudi[s-1]=='I')) {volkswagongti();carnum=2;break;}
     else if ((selectaudi[0]=='T' || selectaudi[0]=='t') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {volkswagontoas();carnum=3;break;}
     else if ((selectaudi[0]=='J' || selectaudi[0]=='j') && (selectaudi[s-1]=='a' || selectaudi[s-1]=='A')) {volkswagonjetta();carnum=4;break;}
     else if ((selectaudi[0]=='S' || selectaudi[0]=='s') || (selectaudi[0]=='a' || selectaudi[0]=='A') && (selectaudi[s-1]=='t' || selectaudi[s-1]=='T')) {volkswagonsport();carnum=5;break;}
     else if ((selectaudi[0]=='A' || selectaudi[0]=='a') && (selectaudi[s-1]=='s' || selectaudi[s-1]=='S')) {volkswagonatlas();carnum=7;break;}
     else if ((selectaudi[0]=='A' || selectaudi[0]=='a') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {volkswagonarteon();carnum=6;break;}
     else if ((selectaudi[0]=='t' || selectaudi[0]=='T') && (selectaudi[s-1]=='n' || selectaudi[s-1]=='N')) {volkswagontiguan();carnum=8;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}

int volvo()
{
     char audiarr[8][16] = {"Cross Country","V60","S90","C40","XC90","S60","XC90 Recharge","XC40"};
     char selectaudi[10]; 
     printf("So Here's The List of Volvo Cars we are having\n\n");

     for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]);
     int carnum = 0;
     while (1){
        printf("\nSo Whats your choice (Please Enter Full Name):- ");scanf("\n%[^\n]%*c",selectaudi);
     int s = strlen(selectaudi);
     if ((selectaudi[0]=='V' || selectaudi[0]=='v') && (selectaudi[s-1]=='0')) {volvov60recharge();carnum=2;break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[1]=='9')) {volvos90();carnum=3;break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='0')) {volvoc40();carnum=4;break;}
     else if ((selectaudi[0]=='x' || selectaudi[0]=='X') && (selectaudi[s-1]=='e') || (selectaudi[s-1]=='E')) {volvoxc90recharge();carnum=7;break;}
     else if ((selectaudi[0]=='x' || selectaudi[0]=='X') && (selectaudi[s-1]=='0')) {volvoxc90();carnum=5;break;}
     else if ((selectaudi[0]=='s' || selectaudi[0]=='S') && (selectaudi[1]=='6')) {volvos60();carnum=6;break;}
     else if ((selectaudi[0]=='x' || selectaudi[0]=='X') && (selectaudi[s-2]=='4')) {volvoxc40();carnum=8;break;}
     else if ((selectaudi[0]=='c' || selectaudi[0]=='C') && (selectaudi[s-1]=='y' || selectaudi[s-1]=='Y')) {volvov60();carnum=1;break;}
     else printf("I think You Entered the wrong spellings\nPlease Correct it from the list below\n\n"); for (int i=0;i<8;i++) printf("%d.  %s\n",i+1,audiarr[i]); continue;}
int y = selectornot();
     if (y==1) return carnum;
     else {
      printf("\nWant to Explore Another Car Enter Yes Want to Go Back Enter No\n");
      int x = proceedorback();
      if (x==1) return carnum=-1;
      else return carnum=0;
     }}