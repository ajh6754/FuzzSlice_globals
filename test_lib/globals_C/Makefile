TARGET=small

MAKEFLAGS += -j16

# Bins
MAKE=make
CC=clang
CFLAGS=-g -Wall
LFLAGS=

# Detect test directories
TEST_DIRS := $(wildcard test_files/*)

# Escape % so directory names are treated literally
ESCAPED_DIRS := $(TEST_DIRS:%=%)

# Create executables with directory name
PROGRAMS := $(ESCAPED_DIRS:%=%/%)

all: $(PROGRAMS)

# Build executable = folder/folder
%/%:
	@echo "Building $@ ..."
	$(CC) $(CFLAGS) -o $@ $(wildcard $(@D)/*.c) $(LFLAGS)

clean:
	find test_files -type f -executable -delete
	find test_files -type f -name '*.o' -delete

.PHONY: all clean
