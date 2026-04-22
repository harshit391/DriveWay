CC = gcc
CFLAGS = -std=c99 -Wall -Wextra
TARGET = driveway

all: $(TARGET)

$(TARGET): main.c car_data.h utils.h
	$(CC) $(CFLAGS) -o $(TARGET) main.c

clean:
	rm -f $(TARGET) $(TARGET).exe
