#ifndef CAR_DATA_H
#define CAR_DATA_H

typedef struct {
    char fullname[100];
    char shortname[30];
    int price;
    int horsepower;
    int topspeed;
    char speed_unit[4];
    float acceleration;
    char accel_desc[40];
    int torque;
    char torque_unit[20];
    float displacement;
    char disp_label[40];
} Car;

typedef struct {
    char name[20];
    int discount_pct;
    Car cars[8];
    int car_count;
} Brand;

#define NUM_BRANDS 20

static Brand brands[NUM_BRANDS] = {
    /* 0: Audi — 5% discount, 8 cars */
    {"Audi", 5, {
        {"2023 A3 Premium FWD S tronic",                              "A3",         35400, 201,  130, "mph", 6.3f, "0 to 60 mph in seconds",  221, "lb-ft",        1.984f, "CC"},
        {"2023 S3 Premium quattro S tronic",                          "S3",         46800, 306,  150, "mph", 4.5f, "0 to 60 mph in seconds",  295, "lb-ft",        1.984f, "CC"},
        {"2023 SQ7 Premium Plus TFSI quattro",                        "SQ7",        90200, 500,  155, "mph", 4.3f, "0 to 60 mph in seconds",  568, "lb-ft",        3.996f, "CC"},
        {"2023 Audi Q5 40 TFSI quattro S tronic",                     "Q5",         44200, 201,  130, "mph", 6.8f, "0 to 60 mph in seconds",  236, "lb-ft",        1.984f, "CC"},
        {"2023 Audi Q8 Premium quattro Tiptronic",                    "Q8",         72800, 335,  130, "mph", 5.7f, "0 to 60 mph in seconds",  369, "lb-ft",        2.995f, "CC"},
        {"2023 Audi Q7 45 Premium quattro Tiptronic",                 "Q7",         59200, 261,  130, "mph", 6.7f, "0 to 60 mph in seconds",  273, "lb-ft",        1.984f, "CC"},
        {"2023 SQ8 Premium Plus quattro Tiptronic",                   "SQ8",        95500, 500,  155, "mph", 4.3f, "0 to 60 mph in seconds",  568, "lb-ft",        3.996f, "CC"},
        {"2023 A6 allroad quattro TFSI Premium Plus quattro S tronic","A6 Allroad", 67900, 335,  130, "mph", 5.4f, "0 to 60 mph in seconds",  369, "lb-ft",        2.995f, "CC"},
    }, 8},

    /* 1: Bentley — 0% discount, 7 cars */
    {"Bentley", 0, {
        {"Bentley Bentayga EWB",          "Bentayga EWB",          226990, 542, 180, "mph", 4.5f, "0 to 60 mph in seconds", 568, "lb-ft", 3.996f, "CC"},
        {"Bentley Bentayga Speed",        "Bentayga Speed",        263000, 626, 180, "mph", 3.8f, "0 to 60 mph in seconds", 664, "lb-ft", 5.995f, "CC"},
        {"Bentley Flying Spur Azure",     "Flying Spur Azure",     284320, 542, 198, "mph", 4.0f, "0 to 60 mph in seconds", 568, "lb-ft", 3.996f, "CC"},
        {"Bentley Flying Spur Odyssean",  "Flying Spur Odyssean",  211325, 536, 177, "mph", 4.1f, "0 to 60 mph in seconds", 553, "lb-ft", 2.894f, "CC"},
        {"Bentley Continental GT",        "Continental GT",        346268, 542, 198, "mph", 3.9f, "0 to 60 mph in seconds", 568, "lb-ft", 3.996f, "CC"},
        {"Bentley Continental GT S",      "Continental GT S",      346268, 542, 198, "mph", 3.9f, "0 to 60 mph in seconds", 568, "lb-ft", 3.996f, "CC"},
        {"Bentley Continental GTC",       "Continental GTC",       346268, 542, 198, "mph", 4.0f, "0 to 60 mph in seconds", 568, "lb-ft", 3.996f, "CC"},
    }, 7},

    /* 2: BMW — 5% discount, 8 cars */
    {"BMW", 5, {
        {"BMW X1 xDrive 28i",       "X1",       38600, 240, 149, "mph", 6.2f, "0 to 60 mph in seconds", 295, "lb-ft", 1.998f, "CC"},
        {"BMW 7 Series 740i Sedan", "7 Series", 95700, 375, 155, "mph", 5.2f, "0 to 60 mph in seconds", 398, "lb-ft", 2.998f, "CC"},
        {"BMW X7 xDrive40i",        "X7",       77850, 375, 155, "mph", 5.8f, "0 to 60 mph in seconds", 398, "lb-ft", 2.998f, "CC"},
        {"BMW X5 xDrive40i",        "X5",       63900, 335, 151, "mph", 5.3f, "0 to 60 mph in seconds", 332, "lb-ft", 2.998f, "CC"},
        {"BMW X6 xDrive40i",        "X6",       70100, 335, 151, "mph", 5.3f, "0 to 60 mph in seconds", 332, "lb-ft", 2.998f, "CC"},
        {"BMW 4 Series 430i Coupe",  "4 Series", 47400, 255, 155, "mph", 5.5f, "0 to 60 mph in seconds", 295, "lb-ft", 1.998f, "CC"},
        {"BMW 2 Series 230i Coupe",  "2 Series", 38200, 255, 155, "mph", 5.5f, "0 to 60 mph in seconds", 295, "lb-ft", 1.998f, "CC"},
        {"BMW X3 xDrive30i",        "X3",       46200, 248, 155, "mph", 6.0f, "0 to 60 mph in seconds", 295, "lb-ft", 1.998f, "CC"},
    }, 8},

    /* 3: Bugatti — 0% discount, 5 cars */
    {"Bugatti", 0, {
        {"Bugatti Super Sport 300+",  "Super Sport 300+",  3900000, 1577, 305, "mph", 2.3f, "0 to 60 mph in seconds", 1180, "lb-ft", 7.993f, "CC"},
        {"Bugatti Chiron",            "Chiron",            2900000, 1480, 261, "mph", 2.5f, "0 to 60 mph in seconds", 1180, "lb-ft", 7.993f, "CC"},
        {"Bugatti Divo",              "Divo",              5400000, 1480, 236, "mph", 2.3f, "0 to 60 mph in seconds", 1180, "lb-ft", 7.993f, "CC"},
        {"Bugatti Veyron 16.4 EB",    "Veyron 16.4 EB",   1900000,  987, 253, "mph", 2.5f, "0 to 60 mph in seconds",  921, "lb-ft", 7.993f, "CC"},
        {"Bugatti Veyron 16.4 GS",    "Veyron 16.4 GS",   1900000,  987, 253, "mph", 2.7f, "0 to 60 mph in seconds",  921, "lb-ft", 7.993f, "CC"},
    }, 5},

    /* 4: Chevrolet — 10% discount, 7 cars */
    {"Chevrolet", 10, {
        {"Chevrolet Suburban High Country RWD",                      "Suburban",    58795, 420, 154, "mph", 7.2f, "0 to 60 mph in seconds", 460, "lb-ft", 6.200f, "CC"},
        {"Chevrolet Tahoe High Country RWD",                         "Tahoe",       56095, 420, 124, "mph", 5.8f, "0 to 60 mph in seconds", 460, "lb-ft", 6.200f, "CC"},
        {"Chevrolet Trailblazer Active FWD",                         "Trailblazer", 23395, 155, 124, "mph", 8.7f, "0 to 60 mph in seconds", 174, "lb-ft", 1.300f, "CC"},
        {"Chevrolet Bolt EV 2LT",                                    "Bolt EV",     27495, 200,  90, "mph", 6.7f, "0 to 60 mph in seconds", 266, "lb-ft", 7.500f, "Charging Hours"},
        {"Chevrolet Blazer RS FWD",                                  "Blazer",      36495, 308, 130, "mph", 6.3f, "0 to 60 mph in seconds", 270, "lb-ft", 3.600f, "CC"},
        {"Chevrolet Silverado 1500 LTZ Crew Cab Short Bed 2WD",     "Silverado",   38195, 355, 125, "mph", 5.4f, "0 to 60 mph in seconds", 383, "lb-ft", 5.300f, "CC"},
        {"Chevrolet Traverse LTD High Country Crew Cab Short Bed 2WD","Traverse",   32195, 355, 130, "mph", 6.9f, "0 to 60 mph in seconds", 383, "lb-ft", 5.300f, "CC"},
    }, 7},

    /* 5: Ferrari — 0% discount, 8 cars */
    {"Ferrari", 0, {
        {"Ferrari 812 GTS",    "812 GTS",     363730, 790, 340, "kmh", 2.9f, "0 to 100 kmh in seconds", 718, "newton-metre", 6.496f, "CC"},
        {"Ferrari 296 GTB",    "296 GTB",     338255, 653, 330, "kmh", 2.9f, "0 to 100 kmh in seconds", 740, "newton-metre", 2.992f, "CC"},
        {"Ferrari 296 GTS",    "296 GTS",     320000, 653, 330, "kmh", 2.9f, "0 to 100 kmh in seconds", 740, "newton-metre", 2.992f, "CC"},
        {"Ferrari SF90 Spider","SF90 Spider",  625000, 770, 340, "kmh", 2.5f, "0 to 100 kmh in seconds", 800, "newton-metre", 3.990f, "CC"},
        {"Ferrari F8 Tributo", "F8 Tributo",   276550, 710, 340, "kmh", 2.9f, "0 to 100 kmh in seconds", 770, "newton-metre", 3.902f, "CC"},
        {"Ferrari F8 Spider",  "F8 Spider",    324340, 710, 340, "kmh", 2.9f, "0 to 100 kmh in seconds", 770, "newton-metre", 3.902f, "CC"},
        {"Ferrari Roma",       "Roma",         222620, 610, 340, "kmh", 3.4f, "0 to 100 kmh in seconds", 760, "newton-metre", 3.855f, "CC"},
        {"Ferrari Portofino M","Portofino M",  246102, 610, 340, "kmh", 3.4f, "0 to 100 kmh in seconds", 760, "newton-metre", 3.855f, "CC"},
    }, 8},

    /* 6: Honda — 5% discount, 8 cars */
    {"Honda", 5, {
        {"Honda CR-V EX",        "CR-V",      31610, 190, 124, "mph",  7.6f, "0 to 60 mph in seconds", 179, "lb-ft", 1.498f, "CC"},
        {"Honda Accord EX",      "Accord",    29610, 190, 116, "mph",  6.6f, "0 to 60 mph in seconds", 192, "lb-ft", 1.498f, "CC"},
        {"Honda Pilot EX-L",     "Pilot",     41950, 285, 113, "mph",  6.3f, "0 to 60 mph in seconds", 262, "lb-ft", 3.471f, "CC"},
        {"Honda Civic EX",       "Civic",     26450, 180, 130, "mph",  6.8f, "0 to 60 mph in seconds", 177, "lb-ft", 1.498f, "CC"},
        {"Honda Odyssey EX",     "Odyssey",   37490, 280, 111, "mph",  6.5f, "0 to 60 mph in seconds", 262, "lb-ft", 3.741f, "CC"},
        {"Honda HR-V EX-L",      "HR-V",      27900, 158, 116, "mph", 10.9f, "0 to 60 mph in seconds", 138, "lb-ft", 1.996f, "CC"},
        {"Honda Passport EX-L",  "Passport",  41100, 280, 134, "mph",  6.2f, "0 to 60 mph in seconds", 262, "lb-ft", 3.471f, "CC"},
        {"Honda Ridgeline Sport", "Ridgeline", 38800, 280, 130, "mph",  6.2f, "0 to 60 mph in seconds", 262, "lb-ft", 3.471f, "CC"},
    }, 8},

    /* 7: Jaguar — 5% discount, 5 cars */
    {"Jaguar", 5, {
        {"Jaguar XF Saloon P250 RWD",          "XF",     47000, 201, 146, "mph", 7.5f, "0 to 60 mph in seconds", 317, "lb-ft",  1.997f, "CC"},
        {"Jaguar E-Pace SE P250 AWD AUTOMATIC", "E-Pace", 48000, 246, 142, "mph", 7.0f, "0 to 60 mph in seconds", 269, "lb-ft",  1.997f, "CC"},
        {"Jaguar F-Pace P250 AWD AUTOMATIC",    "F-Pace", 52400, 246, 135, "mph", 6.9f, "0 to 60 mph in seconds", 269, "lb-ft",  1.997f, "CC"},
        {"Jaguar I-Pace EV400",                 "I-Pace", 71300, 394, 124, "mph", 4.5f, "0 to 60 mph in seconds", 512, "lb-ft", 10.000f, "Charging Hours"},
        {"Jaguar F-Type P450 AWD AUTOMATIC",    "F-Type", 77900, 444, 177, "mph", 4.4f, "0 to 60 mph in seconds", 428, "lb-ft",  5.000f, "CC"},
    }, 5},

    /* 8: Kia — 10% discount, 8 cars */
    {"Kia", 10, {
        {"Kia Sportage LX",  "Sportage",  26290, 187, 125, "mph", 8.2f, "0 to 60 mph in seconds", 178, "lb-ft", 2.497f, "CC"},
        {"Kia Sorento LX",   "Sorento",   30090, 191, 124, "mph", 7.7f, "0 to 60 mph in seconds", 181, "lb-ft", 2.497f, "CC"},
        {"Kia Carnival MPV",  "Carnival",  33100, 290, 118, "mph", 7.5f, "0 to 60 mph in seconds", 262, "lb-ft", 3.470f, "CC"},
        {"Kia K5 LXS",       "K5",        25290, 180, 155, "mph", 5.7f, "0 to 60 mph in seconds", 195, "lb-ft", 1.598f, "CC"},
        {"Kia EV6 Wind",     "EV6",       48700, 225, 160, "mph", 3.5f, "0 to 60 mph in seconds", 258, "lb-ft", 7.250f, "Charging Hours"},
        {"Kia Telluride LX", "Telluride", 35890, 291, 132, "mph", 7.2f, "0 to 60 mph in seconds", 262, "lb-ft", 3.778f, "CC"},
        {"Kia Soul LX",      "Soul",      19890, 147, 128, "mph", 6.4f, "0 to 60 mph in seconds", 132, "lb-ft", 1.998f, "CC"},
        {"Kia Niro LX",      "Niro",      26590, 139, 104, "mph", 7.8f, "0 to 60 mph in seconds", 195, "lb-ft", 1.580f, "CC"},
    }, 8},

    /* 9: Lamborghini — 0% discount, 8 cars */
    {"Lamborghini", 0, {
        {"Lamborghini Aventador SVJ",       "Aventador SVJ",       699000, 760, 350, "kmh", 2.8f, "0 to 100 kmh in seconds", 720, "newton-metre", 6.498f, "CC"},
        {"Lamborghini Huracan Sterrato",    "Huracan Sterrato",    274000, 600, 260, "kmh", 3.4f, "0 to 100 kmh in seconds", 560, "newton-metre", 5.204f, "CC"},
        {"Lamborghini Huracan Tecnica",     "Huracan Tecnica",     239000, 630, 325, "kmh", 3.2f, "0 to 100 kmh in seconds", 565, "newton-metre", 5.204f, "CC"},
        {"Lamborghini Huracan STO",         "Huracan STO",         333000, 630, 310, "kmh", 3.0f, "0 to 100 kmh in seconds", 565, "newton-metre", 5.204f, "CC"},
        {"Lamborghini Huracan EVO Spyder",  "Huracan EVO Spyder",  268000, 630, 325, "kmh", 3.1f, "0 to 100 kmh in seconds", 600, "newton-metre", 5.204f, "CC"},
        {"Lamborghini Urus S",              "Urus S",              230000, 650, 305, "kmh", 3.5f, "0 to 100 kmh in seconds", 850, "newton-metre", 3.996f, "CC"},
        {"Lamborghini Countach LPI 800-4",  "Countach",           2600000, 800, 355, "kmh", 2.8f, "0 to 100 kmh in seconds", 720, "newton-metre", 6.498f, "CC"},
        {"Lamborghini Sian FKP 37",         "Sian",               3500000, 800, 335, "kmh", 2.8f, "0 to 100 kmh in seconds", 720, "newton-metre", 6.498f, "CC"},
    }, 8},

    /* 10: Land Rover — 5% discount, 6 cars */
    {"Land Rover", 5, {
        {"Land Rover Range Rover Sport Dynamic", "Range Rover Sport",  83000, 350, 145, "mph", 6.0f, "0 to 60 mph in seconds", 516, "newton-metre", 2.997f, "CC"},
        {"Land Rover Defender S",                "Defender",           68000, 296, 119, "mph", 7.5f, "0 to 60 mph in seconds", 295, "newton-metre", 2.996f, "CC"},
        {"Land Rover Discovery S",               "Discovery",         58400, 296, 125, "mph", 6.9f, "0 to 60 mph in seconds", 295, "newton-metre", 1.997f, "CC"},
        {"Land Rover Range Rover SE",            "Range Rover",      106500, 395, 150, "mph", 5.5f, "0 to 60 mph in seconds", 406, "newton-metre", 2.997f, "CC"},
        {"Land Rover Range Rover Evoque SE",     "Range Rover Evoque",51000, 246, 143, "mph", 7.0f, "0 to 60 mph in seconds", 269, "newton-metre", 1.997f, "CC"},
        {"Land Rover Range Rover Velar S",       "Range Rover Velar", 61500, 247, 135, "mph", 7.1f, "0 to 60 mph in seconds", 269, "newton-metre", 1.998f, "CC"},
    }, 6},

    /* 11: Lexus — 5% discount, 8 cars */
    {"Lexus", 5, {
        {"Lexus RX 350 FWD", "RX", 48550, 275, 124, "mph", 7.6f, "0 to 60 mph in seconds", 317, "lb-ft", 2.390f, "CC"},
        {"Lexus NX 250",     "NX", 40205, 203, 124, "mph", 8.2f, "0 to 60 mph in seconds", 184, "lb-ft", 2.498f, "CC"},
        {"Lexus LX",         "LX", 90660, 409, 130, "mph", 6.9f, "0 to 60 mph in seconds", 479, "lb-ft", 3.370f, "CC"},
        {"Lexus ES 250 AWD", "ES", 42590, 203, 131, "mph", 8.6f, "0 to 60 mph in seconds", 184, "lb-ft", 2.498f, "CC"},
        {"Lexus UX 250h FWD","UX", 36490, 181, 110, "mph", 8.4f, "0 to 60 mph in seconds", 139, "lb-ft", 1.997f, "CC"},
        {"Lexus LS 500",     "LS", 78035, 416, 136, "mph", 4.6f, "0 to 60 mph in seconds", 442, "lb-ft", 3.398f, "CC"},
        {"Lexus LC 500",     "LC", 95600, 471, 168, "mph", 4.4f, "0 to 60 mph in seconds", 398, "lb-ft", 4.997f, "CC"},
        {"Lexus IS 500",     "IS", 40985, 241, 143, "mph", 6.9f, "0 to 60 mph in seconds", 258, "lb-ft", 1.998f, "CC"},
    }, 8},

    /* 12: Maserati — 3% discount, 5 cars */
    {"Maserati", 3, {
        {"Maserati Grecale GT",          "Grecale",      63500, 300, 240, "kmh", 5.6f, "0 to 100 kmh in seconds", 450, "newton-metre", 2.995f, "CC"},
        {"Maserati Levante Trofeo",      "Levante",      90700, 580, 302, "kmh", 4.1f, "0 to 100 kmh in seconds", 730, "newton-metre", 3.799f, "CC"},
        {"Maserati Ghibli Trofeo",       "Ghibli",       85300, 570, 326, "kmh", 4.3f, "0 to 100 kmh in seconds", 730, "newton-metre", 3.799f, "CC"},
        {"Maserati MC20 Cielo",          "MC20",        250000, 630, 320, "kmh", 2.8f, "0 to 100 kmh in seconds", 730, "newton-metre", 3.000f, "CC"},
        {"Maserati Quattroporte Trofeo", "Quattroporte",145900, 580, 326, "kmh", 4.5f, "0 to 100 kmh in seconds", 730, "newton-metre", 3.799f, "CC"},
    }, 5},

    /* 13: Mercedes Benz — 5% discount, 8 cars */
    {"Mercedes Benz", 5, {
        {"Mercedes-Benz GLS 450 SUV",        "GLS",     81800, 362, 174, "mph", 5.9f, "0 to 60 mph in seconds", 369, "lb-ft", 2.998f, "CC"},
        {"Mercedes-Benz GLE 350 SUV",        "GLE",     57700, 255, 174, "mph", 7.0f, "0 to 60 mph in seconds", 273, "lb-ft", 1.998f, "CC"},
        {"Mercedes-Benz C-Class 300 Sedan",  "C-Class", 43550, 255, 174, "mph", 6.0f, "0 to 60 mph in seconds", 295, "lb-ft", 1.998f, "CC"},
        {"Mercedes-Benz EQS SUV 4Matic SUV", "EQS",    107400, 355, 130, "mph", 5.8f, "0 to 60 mph in seconds", 590, "lb-ft", 12.50f, "Charging Hours"},
        {"Mercedes-Benz A-Class 220 Sedan",  "A-Class", 33950, 188, 135, "mph", 7.1f, "0 to 60 mph in seconds", 221, "lb-ft", 1.997f, "CC"},
        {"Mercedes-Benz GLB 250 SUV",        "GLB",     39800, 221, 155, "mph", 6.9f, "0 to 60 mph in seconds", 258, "lb-ft", 1.997f, "CC"},
        {"Mercedes-Benz CLA 250 Coupe",      "CLA",     39350, 221, 146, "mph", 6.3f, "0 to 60 mph in seconds", 258, "lb-ft", 1.997f, "CC"},
        {"Mercedes-Benz GLA 250 SUV",        "GLA",     37500, 221, 155, "mph", 6.8f, "0 to 60 mph in seconds", 258, "lb-ft", 1.998f, "CC"},
    }, 8},

    /* 14: Porsche — 3% discount, 7 cars */
    {"Porsche", 3, {
        {"Porsche Cayenne",     "Cayenne",     72200, 335, 245, "kmh", 6.2f, "0 to 100 kmh in seconds", 450, "newton-metre", 2.995f, "CC"},
        {"Porsche 911 Carrera", "911 Carrera",106100, 380, 293, "kmh", 4.2f, "0 to 100 kmh in seconds", 450, "newton-metre", 2.981f, "CC"},
        {"Porsche Panamera",    "Panamera",    92400, 320, 270, "kmh", 5.6f, "0 to 100 kmh in seconds", 450, "newton-metre", 2.894f, "CC"},
        {"Porsche Macan",       "Macan",       58950, 260, 232, "kmh", 6.4f, "0 to 100 kmh in seconds", 400, "newton-metre", 1.984f, "CC"},
        {"Porsche Taycan",      "Taycan",      86700, 400, 230, "kmh", 5.4f, "0 to 100 kmh in seconds", 357, "newton-metre", 4.500f, "Charging Hours"},
        {"Porsche 718 Cayman",  "718 Cayman",  63400, 290, 275, "kmh", 5.1f, "0 to 100 kmh in seconds", 380, "newton-metre", 1.988f, "CC"},
        {"Porsche 718 Boxster", "718 Boxster", 65500, 300, 275, "kmh", 5.1f, "0 to 100 kmh in seconds", 380, "newton-metre", 1.988f, "CC"},
    }, 7},

    /* 15: Rolls Royce — 0% discount, 7 cars */
    {"Rolls Royce", 0, {
        {"Rolls Royce Phantom VIII V12 EWB", "Phantom",    460000, 563, 155, "mph", 5.4f, "0 to 60 mph in seconds", 663, "lb-ft",  6.749f, "CC"},
        {"Rolls Royce Spectre EV",           "Spectre",    413000, 577, 155, "mph", 4.5f, "0 to 60 mph in seconds", 663, "lb-ft", 10.750f, "Charging Hours"},
        {"Rolls Royce Ghost EWB",            "Ghost",      311900, 563, 155, "mph", 4.8f, "0 to 60 mph in seconds", 626, "lb-ft",  6.592f, "CC"},
        {"Rolls Royce Cullinan 6.6 V12",     "Cullinan",   355000, 563, 155, "mph", 5.2f, "0 to 60 mph in seconds", 626, "lb-ft",  6.592f, "CC"},
        {"Rolls Royce Wraith V12",           "Wraith",     344500, 623, 155, "mph", 4.6f, "0 to 60 mph in seconds", 590, "lb-ft",  6.592f, "CC"},
        {"Rolls Royce Dawn V12",             "Dawn",       359250, 563, 155, "mph", 4.9f, "0 to 60 mph in seconds", 575, "lb-ft",  6.592f, "CC"},
        {"Rolls Royce Black Badge V12",      "Black Badge",376350, 593, 155, "mph", 4.9f, "0 to 60 mph in seconds", 619, "lb-ft",  6.592f, "CC"},
    }, 7},

    /* 16: Tesla — 0% discount, 6 cars */
    {"Tesla", 0, {
        {"Tesla Model S Plaid", "Model S Plaid", 119000, 1006, 200, "mph", 2.1f, "0 to 60 mph in seconds", 1050, "lb-ft", 6.250f, "Charging Hours"},
        {"Tesla Model 3",       "Model 3",        40000,  321, 140, "mph", 6.1f, "0 to 60 mph in seconds",  309, "lb-ft", 6.000f, "Charging Hours"},
        {"Tesla Model X Plaid", "Model X Plaid", 119000, 1006, 163, "mph", 2.6f, "0 to 60 mph in seconds",  752, "lb-ft", 6.250f, "Charging Hours"},
        {"Tesla Model Y",       "Model Y",        42000,  456, 150, "mph", 3.7f, "0 to 60 mph in seconds",  471, "lb-ft", 7.500f, "Charging Hours"},
        {"Tesla Model S",       "Model S",       100000,  604, 155, "mph", 3.2f, "0 to 60 mph in seconds",  713, "lb-ft", 6.500f, "Charging Hours"},
        {"Tesla Model X",       "Model X",       120990,  604, 155, "mph", 3.6f, "0 to 60 mph in seconds",  713, "lb-ft", 6.500f, "Charging Hours"},
    }, 6},

    /* 17: Toyota — 5% discount, 8 cars */
    {"Toyota", 5, {
        {"Toyota Sequoia SR5",          "Sequoia",    58365, 437, 107, "mph", 5.6f, "0 to 60 mph in seconds", 583, "lb-ft", 3.445f, "CC"},
        {"Toyota Highlander Hybrid LE", "Highlander", 36420, 243, 118, "mph", 6.8f, "0 to 60 mph in seconds", 175, "lb-ft", 2.470f, "CC"},
        {"Toyota Sienna LE",            "Sienna",     36135, 245, 116, "mph", 7.8f, "0 to 60 mph in seconds", 176, "lb-ft", 2.498f, "CC"},
        {"Toyota Tundra Limited",       "Tundra",     37865, 389, 107, "mph", 6.1f, "0 to 60 mph in seconds", 479, "lb-ft", 3.445f, "CC"},
        {"Toyota RAV4 Prime Hybrid SE", "RAV4 Prime", 42340, 177,  84, "mph", 5.7f, "0 to 60 mph in seconds", 165, "lb-ft", 2.498f, "CC"},
        {"Toyota Corolla LE",           "Corolla",    21550, 169, 143, "mph", 5.4f, "0 to 60 mph in seconds", 151, "lb-ft", 1.998f, "CC"},
        {"Toyota Venza Hybrid LE",      "Venza",      34120, 219, 170, "mph", 7.0f, "0 to 60 mph in seconds", 163, "lb-ft", 2.490f, "CC"},
        {"Toyota Camry LE Hybrid",      "Camry",      26220, 208, 135, "mph", 5.1f, "0 to 60 mph in seconds", 163, "lb-ft", 2.470f, "CC"},
    }, 8},

    /* 18: Volkswagen — 10% discount, 8 cars */
    {"Volkswagen", 10, {
        {"Volkswagen Golf GTI",         "Golf GTI",          30530, 241, 155, "mph", 5.1f, "0 to 60 mph in seconds", 273, "lb-ft", 1.798f, "CC"},
        {"Volkswagen Golf R",           "Golf R",            44740, 315, 167, "mph", 4.5f, "0 to 60 mph in seconds", 295, "lb-ft", 1.998f, "CC"},
        {"Volkswagen Taos",             "Taos",              24155, 158, 125, "mph", 7.6f, "0 to 60 mph in seconds", 184, "lb-ft", 1.498f, "CC"},
        {"Volkswagen Jetta",            "Jetta",             20655, 158, 126, "mph", 7.6f, "0 to 60 mph in seconds", 184, "lb-ft", 1.498f, "CC"},
        {"Volkswagen Atlas Cross Sport","Atlas Cross Sport", 34460, 276, 130, "mph", 7.2f, "0 to 60 mph in seconds", 266, "lb-ft", 3.997f, "CC"},
        {"Volkswagen Arteon",           "Arteon",            43010, 300, 128, "mph", 4.6f, "0 to 60 mph in seconds", 295, "lb-ft", 1.998f, "CC"},
        {"Volkswagen Atlas",            "Atlas",             35150, 235, 130, "mph", 7.3f, "0 to 60 mph in seconds", 273, "lb-ft", 3.598f, "CC"},
        {"Volkswagen Tiguan",           "Tiguan",            26950, 184, 114, "mph", 8.2f, "0 to 60 mph in seconds", 236, "lb-ft", 1.997f, "CC"},
    }, 8},

    /* 19: Volvo — 5% discount, 8 cars */
    {"Volvo", 5, {
        {"Volvo V60 Cross Country B5 AWD", "V60 Cross Country", 48800, 247, 127, "mph", 7.1f, "0 to 60 mph in seconds", 258, "lb-ft", 1.969f, "CC"},
        {"Volvo V60 Recharge T8",          "V60 Recharge",      70550, 455, 122, "mph", 5.5f, "0 to 60 mph in seconds", 532, "lb-ft", 1.998f, "CC"},
        {"Volvo S90 Recharge B6 AWD",      "S90",               57000, 295, 112, "mph", 4.6f, "0 to 60 mph in seconds", 310, "lb-ft", 1.998f, "CC"},
        {"Volvo C40 Recharge Twin Motor",  "C40",               55300, 402, 112, "mph", 4.5f, "0 to 60 mph in seconds", 487, "lb-ft", 4.000f, "Charging Hours"},
        {"Volvo XC90 B5 AWD",             "XC90",               56000, 247, 118, "mph", 6.1f, "0 to 60 mph in seconds", 258, "lb-ft", 4.000f, "Charging Hours"},
        {"Volvo S60 Recharge T8 eAWD",    "S60",                51250, 455, 114, "mph", 4.1f, "0 to 60 mph in seconds", 523, "lb-ft", 1.998f, "CC"},
        {"Volvo XC90 Recharge T8 eAWD",   "XC90 Recharge",     71900, 455, 112, "mph", 5.4f, "0 to 60 mph in seconds", 523, "lb-ft", 5.000f, "Charging Hours"},
        {"Volvo XC40 Recharge Twin Motor", "XC40",              53550, 402, 112, "mph", 4.7f, "0 to 60 mph in seconds", 486, "lb-ft", 7.000f, "Charging Hours"},
    }, 8},
};

#endif
