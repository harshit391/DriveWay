#include <stdio.h>
#include <string.h>

int main() {
    char first_name[100], last_name[100], email[100], password[100], confirm_password[100];
    int option;
    printf("Welcome to DriveWay\n");
    printf("Are you a new user or already registered?\n");
    printf("1. New User\n");
    printf("2. Already Registered\n");
    scanf("%d", &option);
    if (option == 1) {
        printf("Please enter your first name: ");
        scanf("%s", first_name);
        printf("Please enter your last name: ");
        scanf("%s", last_name);
        printf("Please enter your email: ");
        scanf("%s", email);
        printf("Please enter your password: ");
        scanf("%s", password);
        printf("Please confirm your password: ");
        scanf("%s", confirm_password);
        if (strcmp(password, confirm_password) == 0) {
            printf("Registration successful!\n");
            // TODO: Save user information to a database or file
        } else {
            printf("Passwords do not match. Please try again.\n");
        }
    } else if (option == 2) {
        printf("Please enter your email: ");
        scanf("%s", email);
        printf("Please enter your password: ");
        scanf("%s", password);
        // TODO: Check if email and password match with user information in database or file
        printf("Login successful!\n");
        printf("1. Order History\n");
        printf("2. Order Date\n");
        printf("3. Contact Us\n");
        scanf("%d", &option);
        // TODO: Implement options based on user choice
    } else {
        printf("Invalid option. Please try again.\n");
    }
        printf("1. Order History\n");
        printf("2. Order Date\n");
        printf("3. Contact Us\n");
        scanf("%d", &option);
    return 0;
}
