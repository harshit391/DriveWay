# DriveWay

A console-based car shopping application built in C. Browse 20 major car brands, compare 150+ models with full specs, and simulate a complete purchase flow with payment processing and receipt generation.

---

## Features

- **20 Car Brands** — Audi, Bentley, BMW, Bugatti, Chevrolet, Ferrari, Honda, Jaguar, Kia, Lamborghini, Land Rover, Lexus, Maserati, Mercedes Benz, Porsche, Rolls Royce, Tesla, Toyota, Volkswagen, Volvo
- **150+ Car Models** — Each with detailed specs: horsepower, top speed, 0-60 acceleration, torque, engine displacement, and price
- **User Registration** — Name and email validation before browsing
- **Number-Based Selection** — Pick brands and models by number for fast, error-free navigation
- **Full Spec Display** — View complete technical specifications for any car
- **Payment Processing** — Credit card, debit card, and cheque options with bank selection
- **Brand-Based Discounts** — Automatic discounts (3%-10%) depending on the brand and payment method
- **Secure Receipts** — Card numbers are masked (only last 4 digits shown), security codes hidden
- **Delivery Estimate** — Auto-generated delivery date (9-10 months from order)

## Demo

```
Welcome to DriveWay

USER DETAILS:
Enter first name: John
Enter last name: Doe
Enter email address: john@example.com

Welcome to DRIVEWAY, John Doe!

Brands we are having are as follows:
 1. Audi
 2. Bentley
 3. BMW
 ...
20. Volvo
 0. Exit

Enter brand number (1-20, or 0 to exit): 6

You chose Ferrari

Here's the list of Ferrari cars we have:

 1. 812 GTS               $363730
 2. 296 GTB               $338255
 3. 296 GTS               $320000
 4. SF90 Spider            $625000
 5. F8 Tributo             $276550
 6. F8 Spider              $324340
 7. Roma                   $222620
 8. Portofino M            $246102
 0. Go back to brand list

Enter model number (1-8, or 0 to go back): 1

Displaying Full Specs of the car:

Full Name of car: Ferrari 812 GTS
Price of Car in USD: $363730
HorsePower of car is: 790
Top Speed of car in kmh is: 340
Acceleration of Car 0 to 100 kmh in seconds is: 2.9
Torque of the Car in newton-metre is: 718
CC is 6.496
```

## Project Structure

```
DriveWay/
├── main.c          Entry point — registration, browsing, payment, receipt
├── car_data.h      All car data as struct arrays (20 brands, 150+ models)
├── utils.h         Shared helpers — input validation, display, yes/no prompts
├── Makefile        Build with: make
└── README.md
```

### Architecture

```
main.c
 ├── #include "utils.h"     (input helpers, display, validation)
 │    └── #include "car_data.h"  (Brand & Car structs, brands[20] array)
 │
 ├── get_user_details()      User registration with validation
 ├── select_brand()          Number-based brand picker (1-20)
 ├── select_model()          Number-based model picker per brand
 └── process_payment()       Payment method, card info, discount, receipt
```

**Data model:**

```c
typedef struct {
    char fullname[100];     // "Ferrari 812 GTS"
    char shortname[30];     // "812 GTS"
    int price;              // 363730
    int horsepower;         // 790
    int topspeed;           // 340
    char speed_unit[4];     // "kmh"
    float acceleration;     // 2.9
    char accel_desc[40];    // "0 to 100 kmh in seconds"
    int torque;             // 718
    char torque_unit[20];   // "newton-metre"
    float displacement;     // 6.496
    char disp_label[40];    // "CC"
} Car;

typedef struct {
    char name[20];          // "Ferrari"
    int discount_pct;       // 0
    Car cars[8];
    int car_count;          // 8
} Brand;
```

## Getting Started

### Prerequisites

- A C compiler (GCC recommended)
- **Windows (MSYS2):** `pacman -S mingw-w64-x86_64-gcc make`
- **macOS:** `xcode-select --install`
- **Linux (Debian/Ubuntu):** `sudo apt install gcc make`

### Build & Run

```bash
# Clone the repo
git clone https://github.com/harshit391/DriveWay.git
cd DriveWay

# Build
make

# Run
./driveway
```

Or compile directly without make:

```bash
gcc -Wall -Wextra -o driveway main.c
./driveway
```

## Discount Table

| Discount | Brands |
|----------|--------|
| **10%** | Chevrolet, Kia, Volkswagen |
| **5%** | Audi, BMW, Honda, Jaguar, Land Rover, Lexus, Mercedes Benz, Toyota, Volvo |
| **3%** | Maserati, Porsche |
| **0%** | Bentley, Bugatti, Ferrari, Lamborghini, Rolls Royce, Tesla |

> Discounts apply to credit/debit card payments only. Cheque payments are charged at full price.

## Price Range

| Lowest | Highest |
|--------|---------|
| Kia Soul LX — **$19,890** | Bugatti Divo — **$5,400,000** |

## Tech Stack

- **Language:** C (ISO C99)
- **Libraries:** Standard only — `stdio.h`, `string.h`, `stdlib.h`, `time.h`, `ctype.h`
- **Build:** GNU Make / GCC
- **Platform:** Cross-platform (Windows, macOS, Linux)

## Contributors

- [Harshit Singla](https://github.com/harshit391)
- [Harshit Kukreja](https://github.com/HarshitKukreja0731)
- [Harshit Behal](https://github.com/harshit38624)
- [harshpreet931](https://github.com/harshpreet931)

## License

This project is open source and available for educational use.
