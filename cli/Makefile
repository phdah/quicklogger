# Compiler
CC = clang++

# Base compiler flags
CFLAGS = -Wall -std=c++17 -O3

# Include directory
INCLUDE_DIR = -Iinclude

# Source files
SRC = $(wildcard src/*.cpp)

# Executabble
EXE = ql

$(EXE):
	@$(CC) $(CFLAGS) $(SRC) -o $(EXE) $(INCLUDE_DIR)

debug:
	@$(CC) -g $(CFLAGS) $(SRC) -o $(EXE) $(INCLUDE_DIR)

clean:
	@rm -rf $(BUILD_DIR) $(EXE) *.dSYM

.PHONY: clean ql debug

