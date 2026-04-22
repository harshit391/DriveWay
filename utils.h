#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include "car_data.h"

/* Read a line of input safely with bounded length. Returns 1 on success, 0 on failure. */
static int read_line(char *buf, int maxlen) {
    if (fgets(buf, maxlen, stdin) == NULL) return 0;
    /* Remove trailing newline */
    int len = (int)strlen(buf);
    if (len > 0 && buf[len - 1] == '\n') buf[len - 1] = '\0';
    return 1;
}

/* Read a single integer from stdin. Returns 1 on success, 0 on failure. */
static int read_int(int *out) {
    char buf[32];
    if (!read_line(buf, sizeof(buf))) return 0;
    char *end;
    long val = strtol(buf, &end, 10);
    if (end == buf || *end != '\0') return 0;
    if (val > INT_MAX || val < INT_MIN) return 0;
    *out = (int)val;
    return 1;
}

/* Validate that a string contains only alphabetic characters and spaces, with at least one letter. */
static int validate_alpha(const char *str) {
    if (str[0] == '\0') return 0;
    int has_alpha = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) has_alpha = 1;
        else if (str[i] != ' ') return 0;
    }
    return has_alpha;
}

/* Validate an email address (basic check: exactly one @, has . after @, domain is letters). */
static int validate_email(const char *email) {
    int len = (int)strlen(email);
    if (len == 0) return 0;

    int at_pos = -1, at_count = 0;
    for (int i = 0; i < len; i++) {
        if (email[i] == '@') {
            at_pos = i;
            at_count++;
        }
    }

    if (at_count == 0) {
        printf("Invalid email address: '@' symbol not found.\n");
        return 0;
    }
    if (at_count > 1) {
        printf("Invalid email address: multiple '@' symbols found.\n");
        return 0;
    }
    if (at_pos == 0 || at_pos == len - 1) {
        printf("Invalid email address format.\n");
        return 0;
    }

    /* Find the first '.' after '@' */
    int dot_pos = -1;
    for (int i = at_pos + 1; i < len; i++) {
        if (email[i] == '.') { dot_pos = i; break; }
    }

    if (dot_pos == -1) {
        printf("Invalid email address: '.' symbol not found after '@'.\n");
        return 0;
    }
    if (dot_pos == at_pos + 1) {
        printf("Invalid email address: no domain name between '@' and '.'.\n");
        return 0;
    }
    if (dot_pos == len - 1) {
        printf("Invalid email address format.\n");
        return 0;
    }
    for (int i = dot_pos + 1; i < len; i++) {
        if (!islower((unsigned char)email[i])) {
            printf("Invalid email address: special characters or numbers found after '.' symbol.\n");
            return 0;
        }
    }
    return 1;
}

/* Display full specifications of a car. */
static void display_specs(const Car *car) {
    printf("\nDisplaying Full Specs of the car:\n\n");
    printf("Full Name of car: %s\n", car->fullname);
    printf("Price of Car in USD: $%d\n", car->price);
    printf("HorsePower of car is: %d\n", car->horsepower);
    printf("Top Speed of car in %s is: %d\n", car->speed_unit, car->topspeed);
    printf("Acceleration of Car %s is: %.1f\n", car->accel_desc, car->acceleration);
    printf("Torque of the Car in %s is: %d\n", car->torque_unit, car->torque);
    printf("%s is %.3f\n\n", car->disp_label, car->displacement);
}

/* Ask user a yes/no question. Returns 1 for yes, 0 for no. */
static int ask_yes_no(const char *prompt) {
    char buf[32];
    while (1) {
        printf("%s (Enter Yes or No): ", prompt);
        if (!read_line(buf, sizeof(buf))) continue;
        if (buf[0] == 'Y' || buf[0] == 'y') return 1;
        if (buf[0] == 'N' || buf[0] == 'n') return 0;
        printf("Please enter Yes or No only.\n");
    }
}

#endif
