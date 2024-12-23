# Compiler and flags
CC = clang 
CFLAGS = -Wall -Wextra -std=c11 -Iinclude

# Directories
SRC_DIR = src 
OBJ_DIR = obj 
BIN_DIR = bin

# Source files 
SRC = $(shell find $(SRC_DIR) -type f -name "*.c")
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

# Output binary 
TARGET = $(BIN_DIR)/main

# Default rule 
all: $(TARGET)

# Link object files 
$(TARGET): $(OBJ)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "Compiling $< -> $@"
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@ 

# Clean 
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

# Prevent conflicts with filenames
.PHONY: all clean

print-vars:
	@echo "SRC: $(SRC)"
	@echo "OBJ: $(OBJ)"
	@echo "TARGET: $(TARGET)"
	