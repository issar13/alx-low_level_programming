#ifndef MAIN_H
#define MAIN_H

/**
 * Auth: Issa Suleiman
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0B-more_malloc_free directory.
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int str_len(char *str);
void *_calloc(unsigned int bytes, unsigned int size);
void add_arrays(int *mul_result, int *sum_result, int len_r);
int is_digit(char c);
int *multiply(char *num1, int len_1, char *num2, int len_2, int len_r);
void print_me(int *sum_result, int len_r);
int main(int argc, char **argv);

#endif
