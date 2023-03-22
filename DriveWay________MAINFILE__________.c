#include <stdio.h>
#include <string.h>
#include "Driveway_Backbone\Introduction.c"

void main() {
    char first_name[100], last_name[100], email[100];
    printf("Welcome to DriveWay\n\n");
    
        printf("USER DETAILS:\n");

    int a=1;
    while (a) {
        printf("Enter first name: ");
        scanf("%[^\n]%*c", first_name);
        int len = strlen(first_name);

        for (int i = 0; i < len; i++) {
            if ((first_name[i] >= 'a' && first_name[i] <= 'z') || (first_name[i] >= 'A' && first_name[i] <= 'Z') ) {
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
    while (b) {
        printf("Enter last name: ");
        scanf("%[^\n]%*c", last_name);
        int len = strlen(last_name);

        for (int i = 0; i < len; i++) {
            if ((last_name[i] >= 'a' && last_name[i] <= 'z') || (last_name[i] >= 'A' && last_name[i] <= 'Z') ) {
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
    
    
    welcomedriveway(first_name,last_name,email);
}
