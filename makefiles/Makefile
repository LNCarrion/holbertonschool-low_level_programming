# Makefile for building the 'school' executable

# Target executable
TARGET = school

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra

# Source files
SRCS = main.c school.c  school

# Object files (automatically generated from source files)
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
