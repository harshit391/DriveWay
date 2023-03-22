#include <stdio.h>
#include "AllCars.c"
#include "userlogin.c"


void changeArray(int arr1[], int arr2[], int size);

void anothercar(char firstname[100],char lastname[100],char email[100])
{

printf("\n\nBrands we are having are as follows: \n");
    char arr[20][20]={"Audi","Bentley","BMW","Bugatti","Chevrolet","Ferrari","Honda","Jaguar","Kia","Lamborghini","Land Rover","Lexus",
    "Maserati","Mercedes Benz","Porsche","Royal Royace","Tesla","Toyoto","Volkswagon","Volvo"};
char s[100];
int m;
    
    while (1){

    for (int i=0;i<20;i++) printf("%d. %s\n",i+1,arr[i]);
    printf("\n\nWe have different models of each brand available as per your choice.\n");
    printf("\n\nNote :- If you want to exit then type %s\n","exit");
    printf("\nSo what's your choice: ");
    scanf("\n%[^\n]%*c",s);

    int t = strlen(s);

    
    if ((s[0]=='A' || s[0]=='a') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Audi\n");m=1;break;}
    else if ((s[0]=='B' || s[0]=='b') && (s[t-1]=='Y' || s[t-1]=='y')) {printf("\nYou Chose Bentley\n");m=2;break;}
    else if ((s[0]=='B' || s[0]=='b') && (s[t-1]=='W' || s[t-1]=='w')) {printf("\nYou Chose BMW\n");m=3;break;}
    else if ((s[0]=='B' || s[0]=='b') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Bugatti\n");m=4;break;}
    else if ((s[0]=='C' || s[0]=='c') && (s[t-1]=='T' || s[t-1]=='t')) {printf("\nYou Chose Chevrolet\n");m=5;break;}
    else if ((s[0]=='F' || s[0]=='f') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Ferrari\n");m=6;break;}
    else if ((s[0]=='H' || s[0]=='h') && (s[t-1]=='A' || s[t-1]=='a')) {printf("\nYou Chose Honda\n");m=7;break;}
    else if ((s[0]=='J' || s[0]=='j') && (s[t-1]=='R' || s[t-1]=='r')) {printf("\nYou Chose Jaguar\n");m=8;break;}
    else if ((s[0]=='K' || s[0]=='k') && (s[t-1]=='a' || s[t-1]=='A')) {printf("\nYou Chose Kia\n");m=9;break;}
    else if ((s[0]=='L' || s[0]=='l') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Lamborghini\n");m=10;break;}
    else if ((s[0]=='L' || s[0]=='l') && (s[t-1]=='R' || s[t-1]=='r')) {printf("\nYou Chose Land Rover\n");m=11;break;}
    else if ((s[0]=='L' || s[0]=='l') && (s[t-1]=='S' || s[t-1]=='s')) {printf("\nYou Chose Lexus\n");m=12;break;}
    else if ((s[0]=='M' || s[0]=='m') && (s[t-1]=='I' || s[t-1]=='i')) {printf("\nYou Chose Maserati\n");m=13;break;}
    else if ((s[0]=='M' || s[0]=='m') && (s[t-1]=='Z' || s[t-1]=='z')) {printf("\nYou Chose Mercedes Benz\n");m=14;break;}
    else if ((s[0]=='p' || s[0]=='P') && (s[t-1]=='E' || s[t-1]=='e')) {printf("\nYou Chose porsche\n");m=15;break;}
    else if ((s[0]=='R' || s[0]=='r') && (s[t-1]=='e' || s[t-1]=='E')) {printf("\nYou chose Royal Royace\n");m=16;break;}
    else if ((s[0]=='T' || s[0]=='t') && (s[t-1]=='A' || s[t-1]=='a')) {printf("\nYou Chose Tesla\n");m=17;break;}
    else if ((s[0]=='T' || s[0]=='t') && (s[t-1]=='O' || s[t-1]=='o')) {printf("\nYou Chose Toyoto\n");m=18;break;}
    else if ((s[0]=='V' || s[0]=='v') && (s[t-1]=='N' || s[t-1]=='n')) {printf("\nYou Chose Volkswagen\n");m=19;break;}
    else if ((s[0]=='V' || s[0]=='v') && (s[t-1]=='O' || s[t-1]=='o')) {printf("\nYou Chose Volvo\n");m=20;break;}
    else if ((s[0]=='E' || s[0]=='e') && (s[t-1]=='t' || s[t-1]=='T')) break;
    else {
        printf("\nI think you entered wrong spelling\nOr We don't have the car\nPlease Enter Car with correct Spellings with List Given Below:- \n");
        continue;
    }
    }
    carselected(m,firstname,lastname,email);
}

void carselected(int m,char firstname[100],char lastname[100],char email[100])
{
    int y;
    char audiarray[8][100];
    int price[8]={1,2,3,4,5,6,7,8};
    int carpricefromarray;
    char carbrand[20];
    char carfullname[50];
    while (1)
    {
    if (m==1) {y = audi();strcpy(carbrand, "Audi");int carprice[8]={35400,46800,90200,44200,72800,59200,95500,67900,};changeArray(price,carprice,8);char audicarlist[8][100] = {"2023 A3 Premium FWD S tronic","2023 S3 Premium quattro S tronic","2023 SQ7 Premium Plus TFSI quattro","2023 Audi Q5 40 TFSI quattro S tronic","2023 Audi Q8 Premium quattro Tiptronic","2023 Audi Q7 45 Premium quattro Tiptronic","2023 SQ8 Premium Plus quattro Tiptronic","2023 A6 allroad quattro TFSI Premium Plus quattro S tronic"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==2) {y = bentley();strcpy(carbrand, "Bentley");int carprice[8]={226990,263000,284320,211325,346268,346268,346268,346268};changeArray(price,carprice,8);char audicarlist[8][100] = {"Bentley Bentayga EWB","Bentley Bentayga Speed","Bentley Flying Spur Azure","Bentley Flying Spur Odyssean","Bentley Continental GT","Bentley Continental GT S","Bentley Continental GTC"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==3) {y = bmw();strcpy(carbrand, "BMW");int carprice[8]={38600,95700,77850,63900,70100,47400,38200,46200};changeArray(price,carprice,8);char audicarlist[8][100] = { "BMW X1 xDrive 28i","BMW 7 Series 740i Sedan", "BMW X7 xDrive40i", "BMW X5 xDrive40i","BMW X6 xDrive40i", "BMW 4 Series 430i Coupe", "BMW 2 Series 230i Coupe", "BMW X3 xDrive30i"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==4) {y = bugatti();strcpy(carbrand, "Bugatti");int carprice[8]={3900000,2900000,5400000,1900000,1900000};changeArray(price,carprice,8);char audicarlist[8][100] = { "Bugatti Super Sport 300+", "Bugatti Chiron","Bugatti Divo","Bugatti Veyron 16.4 EB","Bugatti Veyron 16.4 GS"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==5) {y = chevrolet();strcpy(carbrand, "Chevrolet");int carprice[8]={58795,56095,23395,27495,36495,38195,32195};changeArray(price,carprice,8);char audicarlist[8][100] = { "Chevrolet Suburban High Country RWD","Chevrolet Tahoe High Country RWD","Chevrolet Trailblazer Active FWD","Chevrolet Bolt EV 2LT","Chevrolet Blazer RS FWD","Chevrolet Silverado 1500 LTZ Crew Cab Short Bed 2WD","Chevrolet Traverse LTD High Country Crew Cab Short Bed 2WD"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==6) {y = ferrari();strcpy(carbrand, "Ferrari");int carprice[8]={363730,338255,320000,625000,276550,324342,222620,246102};changeArray(price,carprice,8);char audicarlist[8][100] = {"Ferrari 812 GTS","Ferrari 296 GTB","Ferrari 296 GTS","Ferrari SF90 Spider","Ferrari F8 Tribito","Ferrari F8 Spider","Ferrari Roma","Ferrari Portfino M"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==7) {y = honda();strcpy(carbrand, "Honda");int carprice[8]={31610,29610,41950,26450,37490,27900,41100,38800};changeArray(price,carprice,8);char audicarlist[8][100] = {"Honda Cr-V EX", "Honda Accord EX", "Honda Pilol EX-L","Honda Civic EX","Honda Odyssey EX", "Honda Hr-V EX-L", "Honda Passport EX-L","Honda Ridgeline Sport"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==8) {y = jaguar();strcpy(carbrand, "Jaguar");int carprice[8]={47000,48000,52400,71300,77900};changeArray(price,carprice,8);char audicarlist[8][100] = { "Jaguar XF Saloon P250 RWD", "Jaguar E-Pace SE P250 AWD AUTOMATIC","Jaguar F-Pace P250 AWD AUTOMATIC","Jaguar I-Pace EV400","Jaguar F-Type P450 AWD AUTOMATIC"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==9) {y = kia();strcpy(carbrand, "Kia");int carprice[8]={26290,30090,33100,25290,48700,35890,19890,26590};changeArray(price,carprice,8);char audicarlist[8][100] = { "Kia Sportage LX", "Kia Sorento LX","Kia Carnival MPV", "Kia K5 LXS", "Kia EV6 Wind" , "Kia Telluride LX","Kia Soul LX" , "Kia Niro LX"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==10) {y = lamborghini();strcpy(carbrand, "Lamborghini");int carprice[8]={699000,274000,239000,333000,268000,230000,2600000,3500000};changeArray(price,carprice,8);char audicarlist[8][100] = { "Lamborghini Aventador SVJ",  "Lamborghini Huracan Sterrato", "Lamborghini Huracan Tecnica" , "Lamborghini Huracan STO" , "Lamborghini Huracan EVO Spyder"   , "Lamborghini Urus S" , "Lamborghini Countach LPI 800-4"  , "Lamborghini Sian FKP 37"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==11) {y = landrover();strcpy(carbrand, "Landrover");int carprice[8]={83000,68000,58400,106500,51000,61500};changeArray(price,carprice,8);char audicarlist[8][100] = { "Land Rover Range Rover Sport Dynamic", "Land Rover Defender S", "Land Rover Discovery S"   , "Land Rover Range Rover SE", "Land Rover Range Rover Evoque SE", "Land Rover Range Rover Velar S"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==12) {y = lexus();strcpy(carbrand, "Lexus");int carprice[8]={48550,40205,90660,42590,36490,78035,95600,40985};changeArray(price,carprice,8);char audicarlist[8][100] = {"Lexus RX 350 FWD", "Lexus NX 250", "Lexus LX", "Lexus ES 250 AWD" , "Lexus UX 250h FWD",  "Lexus LS 500", "Lexus LC 500"  , "Lexus IS 500"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==13) {y = maserati();strcpy(carbrand, "Maserati");int carprice[8]={63500,90700,85300,250000,145900};changeArray(price,carprice,8);char audicarlist[8][100] = {"Maserati Grecale GT", "Maserati Levante Trofeo", "Maserati Ghibli Trofeo", "Maserati MC20 Cielo", "Maserati Quattroporte Trofeo"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==14) {y = mercedes();strcpy(carbrand, "MercedesBenz");int carprice[8]={81800,57700,43550,107400,33950,39800,39350,37500};changeArray(price,carprice,8);char audicarlist[8][100] = {"Mercedes-Benz GLS 450 SUV", "Mercedes-Benz GLE 350 SUV","Mercedes-Benz C-Class 300 Sedan","Mercedes-Benz EQS SUV 4Matic SUV", "Mercedes-Benz A-Class 220 Sedan", "Mercedes-Benz GLB 250 SUV", "Mercedes-Benz CLA 250 Coupe", "Mercedes-Benz GLA 250 SUV"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==15) {y = porsche();strcpy(carbrand, "Porsche");int carprice[8]={72200,106100,92400,58950,86700,63400,65500};changeArray(price,carprice,8);char audicarlist[8][100] = {"Porsche Cayenne", "Porsche 911 Carrera", "Porsche Panamera","Porsche Macan", "Porsche Tayacan", "Porsche 718 Cayman", "Porsche 718 Boxter"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==16) {y = rollsroyce();strcpy(carbrand, "RollsRoyce");int carprice[8]={460000,413000,311900,355000,344500,359250,376350};changeArray(price,carprice,8);char audicarlist[8][100] = {"Rolls Royce Phantom VIII V12 EWB","Rolls Royce Spectre EV", "Rolls Royce Ghost EWB", "Rolls Royce Cullinan 6.6 V12", "Rolls Royce Wraith V12", "Rolls Royce Dawn V12", "Rolls Royce Black Badge V12"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==17) {y = tesla();strcpy(carbrand, "Tesla");int carprice[8]={119000,40000,119990,42000,100000,120990};changeArray(price,carprice,8);char audicarlist[8][100] = {"Tesla Model S Plaid","Tesla Model 3", "Tesla Model X Plaid", "Tesla Model Y", "Tesla Model S","Tesla Model X"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==18) {y = toyoto();strcpy(carbrand, "Toyoto");int carprice[8]={58365,36420,36135,37865,42340,21550,34120,26220};changeArray(price,carprice,8);char audicarlist[8][100] = { "Toyoto Sequoia SR5","Toyoto Highlander Hybrid LE", "Toyoto Sienna LE","Toyoto Tundra Limited", "Toyoto Rav 4 Prime Hybrid SE", "Toyoto Corolla LE","Toyoto Venza Hybrid LE","Toyoto Camry LE Hybrid"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==19) {y = volkswagon();strcpy(carbrand, "Volkswagon");int carprice[8]={30530,44740,24155,20655,34460,43010,35150,26950};changeArray(price,carprice,8);char audicarlist[8][100] = { "Volkswagon Golf GTI", "Volkswagon Golf R", "Volkswagon Taos", "Volkswagon Jetta", "Volkswagon Atlas Cross Sport", "Volkswagon Arteon", "Volkswagon Atlas", "Volkswagon Tiguan"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    else if (m==20) {y = volvo();strcpy(carbrand, "Volvo");int carprice[8]={48800,70550,57000,55300,56000,51250,71900,53550};changeArray(price,carprice,8);char audicarlist[8][100] = {"Volvo V60 Cross Crountry B5 AWD", "Volvo V60 Recharge T8", "Volvo S90 Recharge B6 AWD", "Volvo C40 Recharge Twin Motor", "Volvo XC90 B5 AWD", "Volvo S60 Recharge T8 eAWD", "Volvo XC90 Recharge T8 eAWD", "Volvo XC40 Recharge Twin Motor"};memcpy(audiarray, audicarlist, sizeof(audicarlist));}
    
    if (y==-2) anothercar(firstname,lastname,email);
    else if (y==-1) continue;
    else {
        carpricefromarray = price[y-1];
        strcpy(carfullname, audiarray[y-1]);
        reciptlogin(carfullname,carpricefromarray,carbrand,firstname,lastname,email);
        break;
    }
    }

}

void changeArray(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        arr1[i] = arr2[i];
    }
}