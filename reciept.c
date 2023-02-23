#include <stdio.h>
#include <string.h>


int main() {
    char firstname[20];
    int a = 1;

    printf("RECEIPT PAGE\n\n");
    printf("Thanks for trusting our website. Please fill the details below to complete your transaction.\n\n");
    printf("USER DETAILS:\n");

    while (a) {
        printf("Enter first name: ");
        scanf("%[^\n]%*c", firstname);
        int len = strlen(firstname);

        for (int i = 0; i < len; i++) {
            if ((firstname[i] >= 'a' && firstname[i] <= 'z') || (firstname[i] >= 'A' && firstname[i] <= 'Z') ) {
                if (i == len - 1) {
                    a = 0;
                }
            } else {
                printf("Invalid input. Please enter a name containing only letters.\n");
                a = 1;
                break;
            }
        }
    }
    int b=1;
    char lastname[20];
    while (b) {
        printf("Enter last name: ");
        scanf("%[^\n]%*c", lastname);
        int len = strlen(lastname);

        for (int i = 0; i < len; i++) {
            if ((lastname[i] >= 'a' && lastname[i] <= 'z') || (lastname[i] >= 'A' && lastname[i] <= 'Z') ) {
                if (i == len - 1) {
                    b = 0;
                }
            } else {
                printf("Invalid input.Please enter a name containing only letters.\n");
                b = 1;
                break;
            }
        }
    }
    int c = 1;
char email[50];
while (c) {
    printf("Enter email address:");
    scanf("%49s", email); 

    int length = strlen(email);
    int i, dot_position = -1, at_position = -1;
    for (i = 0; i < length; i++) {
        if (email[i] == '@') {
            at_position = i;
        }
        if (email[i] == '.') {
            dot_position = i;
        }
    }
    if (at_position == -1) {
        printf("Invalid email address: '@' symbol not found.\n");
        continue;
    }
    else if (dot_position == -1) {
        printf("Invalid email address: '.' symbol not found.\n");
        continue;
    }
    else if (at_position > dot_position) {
        printf("Invalid email address: '@' symbol found after '.' symbol.\n");
        continue;
    }
    else {
        for (i = dot_position + 1; i < length; i++) {
            if (email[i] < 'a' || email[i] > 'z') {
                printf("Invalid email address: special characters or numbers found after '.' symbol.\n");
                break; 
            }
        }
        if (i == length) {
            c = 0; 
        }
    }
}

int d = 1;
char country[20];
while(d) {
    printf("Enter country name: ");
    scanf("%49s", country);
    int len = strlen(country);

    for (int i = 0; i < len; i++) {
        if ((country[i] >= 'a' && country[i] <= 'z') || (country[i] >= 'A' && country[i] <= 'Z') ) {
            if (i == len - 1) {
                d = 0;
            }
        } else {
            printf("Invalid input.Please enter a name containing only letters.\n");
            d = 1;
            break;
        }
    }
}

 char phone[11]; // allocate a buffer to store the phone number (10 digits + null terminator)
    int valid = 0;
    while (!valid) {
        printf("Enter phone number (10 digits only): ");
        scanf("%s", phone);
        int i = 0;
        while (phone[i]) { // iterate over each character in the phone number
            if (!isdigit(phone[i])) { // check if the character is not a digit
                break;
            }
            i++;
        }
        if (i == 10 && !phone[i]) { // check if the phone number has exactly 10 digits and is null-terminated
            valid = 1;
        } else {
            printf("Invalid phone number format. Please enter a 10-digit number.\n");
        }
    }
    

int f = 1;
char city[20];
while(f){
    printf("Enter city name: ");
    scanf("%49s", city);
    int len = strlen(city);

    for (int i = 0; i < len; i++) {
        if ((city[i] >= 'a' && city[i] <= 'z') || (city[i] >= 'A' && city[i] <= 'Z') ) {
            if (i == len - 1) {
                f = 0;
            }
        } else {
            printf("Invalid input.Please enter a name containing only letters.\n");
            f = 1;
        
        }
    }
} 
}

