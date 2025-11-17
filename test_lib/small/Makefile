TARGET=small

MAKEFLAGS += -j16

# Bins
MAKE=make
CC=clang
CFLAGS=-g -Wall
LFLAGS=

# Partial and individual files (per test folder)
MAKE_FILES := $(wildcard test_files/*/Makefile)
PARTIALS := $(patsubst %Makefile,%partial,$(MAKE_FILES))
INDIVIDUALS := $(patsubst %Makefile,%individuals,$(MAKE_FILES))

# Automatically detect all test directories
TEST_DIRS := $(wildcard test_files/*)

# Create executables named after the folder
# Example: test_files/05_extern --> test_files/05_extern/05_extern
PROGRAMS := $(TEST_DIRS:%=%/%)

# Build all
all: $(PROGRAMS)

# Fix: build binary with the SAME NAME as the directory
# $(@D) gives the folder, so basename gives folder name.
%/%:
	@echo "Building executable in $(@D)..."
	$(CC) $(CFLAGS) -o $@ $(wildcard $(@D)/*.c) $(LFLAGS)

# Clean everything
clean:
	find test_files -type f -executable -delete
	find test_files -type f -name '*.o' -delete

.PHONY: all clean
