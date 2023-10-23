# Makefile for building the 'school' executable

# Target executable
TARGET = school

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra

# Source files
SRCS = main.c file1.c file2.c  # List your source files here

# Object files (automatically generated from source files)
OBJS = $(0-makefile:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
