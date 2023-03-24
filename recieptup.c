#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int reciptmode(char car[100],int price,char company[20],char firstname[100],char lastname[100],char email[100]) {
    printf("\nEnter your payment method:\n");
    printf("1.Credit Card\n2.Debit Card\n3.Cheque\n");
    // Input variables
    int bank_choice;
    long long card_number;
    int security_code;
    char method[20];
    char billing_address[100];
    printf("Enter preferred method(enter serial number): ");
    scanf("%19s", method); 

    struct tm* timeinfo;
    time_t rawtime;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, 80, "%B %d, %Y", timeinfo);
    
    int confirmed = 0;
    char* way = NULL;
    while (!confirmed) {
        if (strcmp(method, "1") == 0) {
            way = "credit";
        }  else if (strcmp(method, "2") == 0) {
            way = "debit";
        }  else if (strcmp(method, "3") == 0) {
            way = "cheque";
        }   else {
            printf("Invalid payment method.\n");
            printf("Enter preferred method: ");
            scanf("%19s", method); // read new method from user
            continue; // restart loop to re-evaluate input
        }

        if (way != NULL) {
            printf("You have selected %s as your payment method.\n", way);
            printf("Are you sure? (y/n) ");
            char response[2];
            scanf("%1s", response); // read only one character
            if (response[0] == 'y') {
                confirmed = 1;
            } else {
                printf("Please select a different payment method.\n");
                printf("Enter preferred method: ");
                scanf("%19s", method); // read new method from user
                way = NULL; // reset way to NULL to force re-evaluation
            }
        }

    }
char name;
float finalprice;
   if (strcmp(way, "credit") == 0 || strcmp(way,"debit")== 0) {
    // Get bank choice
    printf("Select your bank:(Enter Number only)\n");
    printf("1. World Bank\n");
    printf("2. HDFC\n");
    printf("3. ICICI\n");
    printf("4. City Bank\n");
    printf("5. Other Bank\n");
    scanf("%d", &bank_choice);
    // Get card number
    while(1) {
        printf("Enter your 10-digit card number:\n");
        if(scanf("%lld", &card_number) != 1) {
            printf("Invalid input. Please enter only digits.\n");
            while(getchar() != '\n'); // Clear input buffer
            continue;
        }
        if(card_number < 1000000000 || card_number > 9999999999) {
            printf("Invalid card number. Please enter a 10-digit number.\n");
            continue;
        }
        break;
    }
    // Get security code
    while(1) {
        printf("Enter your 4-digit security code:\n");
        if(scanf("%d", &security_code) != 1) {
            printf("Invalid input. Please enter only digits.\n");
            while(getchar() != '\n'); // Clear input buffer
            continue;
        }
        if(security_code < 1000 || security_code > 9999) {
            printf("Invalid security code. Please enter a 4-digit number.\n");
            continue;
        }
        break;
    }
    // Get billing address
    
    printf("Enter your billing address:\n");
    scanf(" %[^\n]", billing_address);

    if (strcmp(company, "Audi") == 0) {
        finalprice=price-(5/100.0)*price;
    }


    else if (strcmp(company, "Bentley") == 0) {
        finalprice=price;
    }


    else if (strcmp(company, "BMW") == 0) {
        finalprice=price-(5/100.0)*price;
    }


    else if (strcmp(company, "Bugatti") == 0) {
        finalprice=price;
    }


    else if (strcmp(company, "Chevrolet") == 0) {
        finalprice=price-(10/100.0)*price;
    }


    else if (strcmp(company, "Ferarri") == 0) {
        finalprice=price;
    }


    else if (strcmp(company, "Honda") == 0) {
        finalprice=price-(5/100.0)*price;
    }


    else if (strcmp(company, "Jaguar") == 0) {
        finalprice=price-(5/100.0)*price;
    }


    else if (strcmp(company, "Kia") == 0) {
        finalprice=price-(10/100.0)*price;
    }


    else if (strcmp(company, "Lamborghini") == 0) {
        finalprice=price;
    }


    else if (strcmp(company, "Land Rover") == 0) {
        finalprice=price-(5/100.0)*price;
    }


    else if (strcmp(company, "Lexus") == 0) {
        finalprice=price-(5/100.0)*price;
    }


    else if (strcmp(company, "Maserati") == 0) {
        finalprice=price-(3/100.0)*price;
    }


    else if (strcmp(company, "Mercedes Benz") == 0) {
        finalprice=price-(5/100.0)*price;
    }


    else if (strcmp(company, "Porsche") == 0) {
        finalprice=price-(3/100.0)*price;
    }


    else if (strcmp(company, "Royal Royce") == 0) {
        finalprice=price;
    }


    else if (strcmp(company, "Tesla") == 0) {
        finalprice=price;
    }


    else if (strcmp(company, "Toyoto") == 0) {
        finalprice=price-(5/100.0)*price;
    }


    else if (strcmp(company, "Volkwagon") == 0) {
        finalprice=price-(10/100.0)*price;
    }


    else if (strcmp(company, "Volvo") == 0) {
        finalprice=price-(5/100.0)*price;
    }
   }
else if (strcmp(way, "cheque") == 0) {
    finalprice=price;
    }
        
printf("\nHere's Your Reciept:-\n\n");

printf("Name of User:- %s %s\n",firstname,lastname);
printf("Order Date:- %s\n",buffer);
printf("Brand Name of Car:- %s\n",company);
printf("Full Name of Car:- %s\n",car);
printf("Price to pay:- %.4f\n",finalprice);
// Output card information
    printf("\nYour card information:\n");
    printf("Bank: %s\n", bank_choice == 1 ? "World Bank" : bank_choice == 2 ? "HDFC" : bank_choice == 3 ?  "ICICI" : bank_choice ==4 ? "City Bank" : "Other Bank");
    printf("Card number: %lld\n", card_number);
    printf("Security code: %d\n", security_code);
    printf("Billing address: %s\n", billing_address);


srand(time(NULL));
int rand_months = rand() % 2 + 9; 
    timeinfo->tm_mon += rand_months;
    mktime(timeinfo);

    
    strftime(buffer, 80, "%B %d, %Y", timeinfo);

printf("Email:- %s\n",email);
printf("Expected Date of Delivery in Showroom:- %s\n\n",buffer);

return 0;
}
