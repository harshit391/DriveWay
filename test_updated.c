#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter your payment method:\n");
    printf("1.Credit Card\n2.Debit Card\n3.Cash\n4.Cheque\n");

    char method[20];
    printf("Enter preferred method: ");
    scanf("%19s", method); // limit input to 19 characters to prevent buffer overflow

    int confirmed = 0;
    char* way = NULL;
    while (!confirmed) {
        if (strcmp(method, "1") == 0) {
            way = "credit";
        }  else if (strcmp(method, "2") == 0) {
            way = "debit";
        }  else if (strcmp(method, "3") == 0) {
            way = "cash";
        }  else if (strcmp(method, "4") == 0) {
            way = "cheque";
        } else {
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
char company[30];
char name;
int price=1000;
float finalprice;
printf("enter your selected car:\n");
scanf("%s",company);
   if (strcmp(way, "credit") == 0 || strcmp(way,"debit")== 0) {
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


    else if (strcmp(company, "Landrover") == 0) {
        finalprice=price-(5/100.0)*price;
    }


    else if (strcmp(company, "Lexus") == 0) {
        finalprice=price-(5/100.0)*price;
    }


    else if (strcmp(company, "Maserati") == 0) {
        finalprice=price-(3/100.0)*price;
    }


    else if (strcmp(company, "MercedesBenz") == 0) {
        finalprice=price-(5/100.0)*price;
    }


    else if (strcmp(company, "Porsche") == 0) {
        finalprice=price-(3/100.0)*price;
    }


    else if (strcmp(company, "RollsRoyce") == 0) {
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
printf(" %.4f ",finalprice);


return 0;
}
