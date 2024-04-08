#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * struct format - struct to match format specifier with print function
 * @format: the format specifier
 * @print_func: the corresponding print function
 */
typedef struct format
{
	char *format;
	void (*print_func)();
} format_t;

int sum_them_all(const unsigned int n, ...);
/*
 * Description: Calculates the sum of all the parameters passed to the function
 * Parameters:
 *     - n: The number of parameters to be summed.
 *     - ...: The variable arguments list.
 * Return:
 *     - The sum of all the parameters.
 */

void print_numbers(const char *separator, const unsigned int n, ...);
/*
 * Description: Prints numbers followed by a separator.
 * Parameters:
 *     - separator: The string to be printed between numbers.
 *     - n: The number of parameters to be printed.
 *     - ...: The variable arguments list.
 * Return:
 *     - None.
 */

void print_strings(const char *separator, const unsigned int n, ...);
/*
 * Description: Prints strings followed by a separator.
 * Parameters:
 *     - separator: The string to be printed between strings.
 *     - n: The number of parameters to be printed.
 *     - ...: The variable arguments list.
 * Return:
 *     - None.
 */

void print_all(const char * const format, ...);
/*
 * Description: Prints anything based on the format specifier.
 * Parameters:
 *     - format: The format specifier for the variable arguments.
 *     - ...: The variable arguments list.
 * Return:
 *     - None.
 */

#endif /* VARIADIC_FUNCTIONS_H */
