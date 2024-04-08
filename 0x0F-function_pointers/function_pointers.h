#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);

/* Function prototype for the array_iterator function */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Function prototype for the print_elem function */
void print_elem(int elem);

/* Function prototype for the print_elem_hex function */
void print_elem_hex(int elem);

/* Function prototype for the int_index function */
int int_index(int *array, int size, int (*cmp)(int));
int is_98(int elem);
int is_strictly_positive(int elem);
int abs_is_98(int elem);


#endif /* FUNCTION_POINTERS_H */
