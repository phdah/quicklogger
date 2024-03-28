# Compiler
CC = clang++

# Base compiler flags
CFLAGS = -Wall -std=c++17 -O3

# Include directory
INCLUDE_DIRS = -Iinclude -I/opt/homebrew/opt/*/include

# Linker flags
LDFLAGS= -L/opt/homebrew/opt/curl/lib -lcurl


# Source files
SRC = $(wildcard src/*.cpp) \
       $(wildcard src/components/*.cpp) \
       $(wildcard src/systems/*.cpp)

# Executabble
EXE = bin/ql

$(EXE):
	@$(CC) $(CFLAGS) $(SRC) -o $(EXE) $(INCLUDE_DIRS) $(LDFLAGS)

debug:
	@$(CC) -g $(CFLAGS) '-DDEBUG_FLAG="true"' $(SRC) -o $(EXE) $(INCLUDE_DIRS) $(LDFLAGS)

run: $(EXE)
	$(EXE)

clean:
	@rm -rf $(BUILD_DIR) $(EXE) *.dSYM

.PHONY: clean bin/ql debug

