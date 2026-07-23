CC = gcc

CFLAGS = -Wall -Werror -Wextra -std=c11 -g

TARGET = program

SRC = main.c s21_create_matrix.c s21_remove_matrix.c s21_eq_matrix.c s21_sum_matrix.c s21_sub_matrix.c s21_mult_number.c s21_mult_matrix.c s21_transpose.c s21_determinant.c s21_create_minor.c



$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

re: clean all


.PHONY: all clean re

# make clean && make && ./program