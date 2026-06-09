CC = gcc

CFLAGS = -Wall -Werror -Wextra -std=c11

TARGET = program

SRC = main.c s21_create_matrix.c s21_remove_matrix.c s21_eq_matrix.c


$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

re: clean all


.PHONY: all clean re

# make clean && make && ./program