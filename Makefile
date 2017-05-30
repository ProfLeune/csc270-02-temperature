# Assigment 2: Write a program in C that can perform temperature conversions 
TARGET=temp
SRC=temp.c
CC=gcc
COPTS=-Wall
TESTS=tests/temp_f.test tests/temp_c.test tests/temp_k.c

all: $(TARGET)

clean: $(TARGET) $(TESTS)
	rm -f $^

test: $(TESTS)

$(TARGET): $(SRC)
	$(CC) $(COPTS) -o $(TARGET) $(SRC)
