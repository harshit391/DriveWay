#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

/* ------------------------------------------------------------------ */
/*  User Registration                                                  */
/* ------------------------------------------------------------------ */
static void get_user_details(char *firstname, char *lastname, char *email) {
    printf("Welcome to DriveWay\n\n");
    printf("USER DETAILS:\n");

    /* First name */
    while (1) {
        printf("Enter first name: ");
        if (!read_line(firstname, 100)) continue;
        if (validate_alpha(firstname)) break;
        printf("Invalid input. Please enter a name containing only letters.\n");
    }

    /* Last name */
    while (1) {
        printf("Enter last name: ");
        if (!read_line(lastname, 100)) continue;
        if (validate_alpha(lastname)) break;
        printf("Invalid input. Please enter a name containing only letters.\n");
    }

    /* Email */
    while (1) {
        printf("Enter email address: ");
        if (!read_line(email, 100)) continue;
        if (validate_email(email)) break;
    }
}

/* ------------------------------------------------------------------ */
/*  Brand Selection                                                    */
/* ------------------------------------------------------------------ */
static int select_brand(void) {
    int choice;
    while (1) {
        printf("\nBrands we are having are as follows:\n");
        for (int i = 0; i < NUM_BRANDS; i++) {
            printf("%2d. %s\n", i + 1, brands[i].name);
        }
        printf(" 0. Exit\n");
        printf("\nEnter brand number (1-%d, or 0 to exit): ", NUM_BRANDS);

        if (!read_int(&choice)) {
            printf("Invalid input. Please enter a number.\n");
            continue;
        }
        if (choice == 0) return -1;
        if (choice >= 1 && choice <= NUM_BRANDS) return choice - 1;
        printf("Invalid choice. Please enter a number between 1 and %d.\n", NUM_BRANDS);
    }
}

/* ------------------------------------------------------------------ */
/*  Model Selection                                                    */
/* ------------------------------------------------------------------ */
static int select_model(int brand_idx) {
    Brand *b = &brands[brand_idx];
    int choice;

    while (1) {
        printf("\nHere's the list of %s cars we have:\n\n", b->name);
        for (int i = 0; i < b->car_count; i++) {
            printf("%2d. %-25s  $%d\n", i + 1, b->cars[i].shortname, b->cars[i].price);
        }
        printf(" 0. Go back to brand list\n");
        printf("\nEnter model number (1-%d, or 0 to go back): ", b->car_count);

        if (!read_int(&choice)) {
            printf("Invalid input. Please enter a number.\n");
            continue;
        }
        if (choice == 0) return -1;
        if (choice >= 1 && choice <= b->car_count) return choice - 1;
        printf("Invalid choice. Please enter a number between 1 and %d.\n", b->car_count);
    }
}

/* ------------------------------------------------------------------ */
/*  Payment & Receipt                                                  */
/* ------------------------------------------------------------------ */
static void process_payment(int brand_idx, int car_idx,
                            const char *firstname, const char *lastname,
                            const char *email) {
    Brand *b = &brands[brand_idx];
    Car *c = &b->cars[car_idx];

    /* --- Payment method selection --- */
    int method = 0;
    while (1) {
        printf("\nEnter your payment method:\n");
        printf("1. Credit Card\n");
        printf("2. Debit Card\n");
        printf("3. Cheque\n");
        printf("Enter preferred method (1-3): ");

        if (!read_int(&method) || method < 1 || method > 3) {
            printf("Invalid payment method.\n");
            continue;
        }

        const char *method_name = (method == 1) ? "Credit Card" :
                                  (method == 2) ? "Debit Card" : "Cheque";
        printf("You have selected %s as your payment method.\n", method_name);
        if (ask_yes_no("Are you sure?")) break;
        printf("Please select a different payment method.\n");
    }

    /* --- Collect card details (for credit/debit) --- */
    int bank_choice = 0;
    long long card_number = 0;
    int security_code = 0;
    char billing_address[200] = "";

    if (method == 1 || method == 2) {
        /* Bank selection */
        while (1) {
            printf("\nSelect your bank (enter number only):\n");
            printf("1. World Bank\n");
            printf("2. HDFC\n");
            printf("3. ICICI\n");
            printf("4. City Bank\n");
            printf("5. Other Bank\n");
            printf("Choice: ");
            if (read_int(&bank_choice) && bank_choice >= 1 && bank_choice <= 5) break;
            printf("Invalid choice. Please enter 1-5.\n");
        }

        /* Card number */
        while (1) {
            printf("Enter your 10-digit card number: ");
            char card_buf[32];
            if (!read_line(card_buf, sizeof(card_buf))) continue;
            /* Validate: exactly 10 digits */
            int valid = 1;
            int len = (int)strlen(card_buf);
            if (len != 10) { valid = 0; }
            else {
                for (int i = 0; i < len; i++) {
                    if (!isdigit((unsigned char)card_buf[i])) { valid = 0; break; }
                }
            }
            if (!valid) {
                printf("Invalid card number. Please enter exactly 10 digits.\n");
                continue;
            }
            card_number = atoll(card_buf);
            break;
        }

        /* Security code */
        while (1) {
            printf("Enter your 4-digit security code: ");
            char sec_buf[16];
            if (!read_line(sec_buf, sizeof(sec_buf))) continue;
            int valid = 1;
            int len = (int)strlen(sec_buf);
            if (len != 4) { valid = 0; }
            else {
                for (int i = 0; i < len; i++) {
                    if (!isdigit((unsigned char)sec_buf[i])) { valid = 0; break; }
                }
            }
            if (!valid) {
                printf("Invalid security code. Please enter exactly 4 digits.\n");
                continue;
            }
            security_code = atoi(sec_buf);
            break;
        }

        /* Billing address */
        printf("Enter your billing address: ");
        read_line(billing_address, sizeof(billing_address));
    }

    /* --- Collect additional user info --- */
    char country[100], phone[20], city[100];

    while (1) {
        printf("Enter country name: ");
        if (!read_line(country, sizeof(country))) continue;
        if (validate_alpha(country)) break;
        printf("Invalid input. Please enter a name containing only letters.\n");
    }

    while (1) {
        printf("Enter phone number (10 digits only): ");
        if (!read_line(phone, sizeof(phone))) continue;
        int valid = 1;
        int len = (int)strlen(phone);
        if (len != 10) { valid = 0; }
        else {
            for (int i = 0; i < len; i++) {
                if (!isdigit((unsigned char)phone[i])) { valid = 0; break; }
            }
        }
        if (!valid) {
            printf("Invalid phone number. Please enter exactly 10 digits.\n");
            continue;
        }
        break;
    }

    while (1) {
        printf("Enter city name: ");
        if (!read_line(city, sizeof(city))) continue;
        if (validate_alpha(city)) break;
        printf("Invalid input. Please enter a name containing only letters.\n");
    }

    /* --- Calculate final price --- */
    float finalprice;
    if (method == 3) {
        /* Cheque: no discount */
        finalprice = (float)c->price;
    } else {
        finalprice = (float)c->price * (1.0f - b->discount_pct / 100.0f);
    }

    /* --- Get current date and delivery date --- */
    time_t rawtime;
    struct tm *timeinfo;
    char order_date[80], delivery_date[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(order_date, sizeof(order_date), "%B %d, %Y", timeinfo);

    srand((unsigned int)time(NULL));
    int rand_months = rand() % 2 + 9; /* 9 or 10 months */
    timeinfo->tm_mon += rand_months;
    mktime(timeinfo);
    strftime(delivery_date, sizeof(delivery_date), "%B %d, %Y", timeinfo);

    /* --- Print receipt --- */
    printf("\n========================================\n");
    printf("           YOUR RECEIPT\n");
    printf("========================================\n\n");
    printf("Name of User:          %s %s\n", firstname, lastname);
    printf("Email:                 %s\n", email);
    printf("Country:               %s\n", country);
    printf("Phone:                 %s\n", phone);
    printf("City:                  %s\n", city);
    printf("Order Date:            %s\n", order_date);
    printf("\nBrand Name of Car:     %s\n", b->name);
    printf("Full Name of Car:      %s\n", c->fullname);
    printf("Original Price:        $%d\n", c->price);

    if (b->discount_pct > 0 && method != 3) {
        printf("Discount:              %d%%\n", b->discount_pct);
    }
    printf("Price to pay:          $%.2f\n", finalprice);

    if (method == 1 || method == 2) {
        const char *bank_names[] = {"World Bank", "HDFC", "ICICI", "City Bank", "Other Bank"};
        printf("\nPayment Method:        %s\n", (method == 1) ? "Credit Card" : "Debit Card");
        printf("Bank:                  %s\n", bank_names[bank_choice - 1]);
        /* Mask card number: show only last 4 digits */
        printf("Card number:           ******%04lld\n", card_number % 10000);
        printf("Security code:         ****\n");
        printf("Billing address:       %s\n", billing_address);
    } else {
        printf("\nPayment Method:        Cheque\n");
    }

    printf("\nExpected Delivery:     %s\n", delivery_date);
    printf("\n========================================\n");
    printf("  Thank you for shopping at DriveWay!\n");
    printf("========================================\n\n");
}

/* ------------------------------------------------------------------ */
/*  Main Application Loop                                              */
/* ------------------------------------------------------------------ */
int main(void) {
    char firstname[100], lastname[100], email[100];

    get_user_details(firstname, lastname, email);

    printf("\nWelcome to DRIVEWAY, %s %s!\n", firstname, lastname);
    printf("Here, we offer you a comprehensive and user-friendly platform\n");
    printf("to browse, compare and select your dream car.\n");

    while (1) {
        /* Select brand */
        int brand_idx = select_brand();
        if (brand_idx < 0) {
            printf("\nThank you for visiting DriveWay! Goodbye.\n");
            break;
        }

        printf("\nYou chose %s\n", brands[brand_idx].name);

        while (1) {
            /* Select model */
            int car_idx = select_model(brand_idx);
            if (car_idx < 0) break; /* Go back to brand list */

            /* Show car specs */
            display_specs(&brands[brand_idx].cars[car_idx]);

            /* Ask if they want to proceed to booking */
            if (ask_yes_no("Can we proceed to the booking?")) {
                process_payment(brand_idx, car_idx, firstname, lastname, email);
                printf("Would you like to shop for another car?\n");
                if (!ask_yes_no("Continue shopping?")) {
                    printf("\nThank you for shopping at DriveWay! Goodbye.\n");
                    return 0;
                }
                break; /* Back to brand selection */
            }

            /* Ask if they want to explore another car from same brand */
            printf("Want to explore another car from %s?\n", brands[brand_idx].name);
            if (!ask_yes_no("Continue with this brand?")) {
                break; /* Back to brand list */
            }
        }
    }

    return 0;
}
