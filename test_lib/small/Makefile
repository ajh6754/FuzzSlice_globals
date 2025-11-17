TARGET=small

MAKEFLAGS += -j16

# Bins
MAKE=make
CC=gcc
CFLAGS=-g -Wall
LFLAGS=

# Partial and individual files (per test folder)
MAKE_FILES := $(wildcard test_files/*/Makefile)
PARTIALS := $(patsubst %Makefile,%partial,$(MAKE_FILES))
INDIVIDUALS := $(patsubst %Makefile,%individuals,$(MAKE_FILES))

# Automatically detect all test directories
TEST_DIRS := $(wildcard test_files/*)

# Create executables named after the folder
PROGRAMS := $(TEST_DIRS:%=%/exe)

# Build all
all: $(PROGRAMS)

# Rule: build one executable per folder
# e.g., test_files/05_extern -> test_files/05_extern/exe
%/exe:
	@echo "Building executable in $(@D)..."
	$(CC) $(CFLAGS) -o $@ $(wildcard $(@D)/*.c) $(LFLAGS)

# Clean all executables
clean:
	find test_files -type f -name 'exe' -delete
	find test_files -type f -name '*.o' -delete

.PHONY: all clean
