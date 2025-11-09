CC = $(CROSS_COMPILE)gcc

CFLAGS = -Wall -Wextra

TARGET = writer

SRC = writer.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

