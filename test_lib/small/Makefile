# Minimal Makefile for the small c files

CC = clang
CFLAGS = -g -O2 -Wall
LDFLAGS = -lpthread
TARGET = small_exe
SRC = ../test_files/func_ptr.c

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(TARGET) *.o