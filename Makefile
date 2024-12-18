# Compiler and flags
CC = gcc 
CFLAGS = -Wall -Wextra -std=c11 -Iinclude

# Directories
SRC_DIR = src 
OBJ_DIR = obj 
BIN_DIR = bin 

# Source files 
SRC_FILES = $(wildcard $(SRC_DIR)/**/*.c)
OBJ_FILES = $(patsubts $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

# Output binary 
TARGET = $(BIN_DIR)/algorithms-data-structures

# Default rule 
all: $(TARGET)

# Link object files 
$(TARGET): $(OBJ_FILES) | $(BIN_DIR)
	$(CC) $(OBJ_FILES) -o $@

# Compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@ 

# Create directories
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(OBJ_DIR):
	mkdir -p $(BIN_DIR)

# Clean 
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

# Prevent conflicts with filenames
.PHONY: all clean 
