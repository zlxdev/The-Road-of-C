#Compiler
CC = gcc

#Debugger (useful for checking errors)
CFLAGS = -Wall -Wextra -g -Werror

#Diretories
BIN = bin

#Initializing
%.run: %.c
		@mkdir -p $(BIN)
		@echo "================================================="
		@echo "Compiling the file: $<"
		@echo "================================================="
		@sleep 0.5

		$(CC) $(CFLAGS) "$<" -o "$(BIN)/runner"

		@echo "Build successful! Running..."
		@echo "-------------------------------------------------"
		@sleep 1.25
		@echo " "
		@./$(BIN)/runner
		@echo "\n\n================================================="
		@echo "                 END OF PROGRAM"
		@echo "=================================================\n"

# Cleaning up
clean:
		rm -rf $(BIN)/*
		@echo "Bin folder has been cleaned"