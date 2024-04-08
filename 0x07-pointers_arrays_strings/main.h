#ifndef MAIN_H
#define MAIN_H

/* Function prototype for _memset */
char *_memset(char *s, char b, unsigned int n);
/* Function prototype for _memcpy */
char *_memcpy(char *dest, char *scr, unsigned int n);
/* Function prototype for strchr */
char *_strchr(char *s, char c);
/* Function prototype for strspn */
unsigned int _strspn(char *s, char *accept);
/* Function prototype for strpbrk */
char *_strpbrk(char *s, char *accept);
/* Function prototype for strstr */
char *_strstr(char *haystack, char *needle);
/* Function prototype that prints the chessboard. */
void print_chessboard(char (*a)[8]);
int _putchar(char c);
/** Function prototype that sums of
 * the two diagonals of a square matrix of integers. 
*/
void print_diagsums(int *a, int size);
/** Function prototype that sets
 * the value of a pointer to a char.
*/
void set_string(char **s, char *to);

#endif /* MAIN_H */