# Compiler
CC = clang++

# Base compiler flags
CFLAGS = -Wall -std=c++17 -O3

# Include directory
INCLUDE_DIR = -Iinclude

# Source files
SRC = $(wildcard src/*.cpp) \
       $(wildcard src/components/*.cpp) \
       $(wildcard src/systems/*.cpp)

# Executabble
EXE = bin/ql

$(EXE):
	@$(CC) $(CFLAGS) $(SRC) -o $(EXE) $(INCLUDE_DIR)

debug:
	@$(CC) -g $(CFLAGS) '-DDEBUG_FLAG="true"' $(SRC) -o $(EXE) $(INCLUDE_DIR)

clean:
	@rm -rf $(BUILD_DIR) $(EXE) *.dSYM

.PHONY: clean bin/ql debug

