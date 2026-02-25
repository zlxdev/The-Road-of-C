# Compiler settings
CC := gcc
CFLAGS := -Wall -Wextra -g -Iinclude

# Directory settings
BIN_DIR := bin

# Target file configuration (default fallback provided)
FILE ?= src/core/01_datatypes/core_type_bool.c
BASENAME := $(basename $(notdir $(FILE)))
TARGET := $(BIN_DIR)/$(BASENAME)

.PHONY: all build run clean

all: build

# Compiles the specified file and places the executable in the bin directory
build:
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(FILE) -o $(TARGET)

# Compiles and immediately executes the binary
run: build
	@./$(TARGET)

# Removes compiled binaries while preserving the directory structure
clean:
	rm -rf $(BIN_DIR)/*
	@touch $(BIN_DIR)/.gitkeep