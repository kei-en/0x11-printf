#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c, int *k);
void _puts(char *str, int *k);
void print_number(int n, int *k);

#endif
