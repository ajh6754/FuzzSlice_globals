# Minimal Makefile for small.c

TARGET = small_exe
SRC = small.c
CC = clang
CFLAGS = -O2 -g -Wall
LDFLAGS = -lpthread

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(TARGET) *.o
