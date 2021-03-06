#ifndef IO_UTILITY_H
#define IO_UTILITY_H

#include <sys/types.h>

char *read_string(char *buf, const size_t size);
void mt_perror(const char *str);
void print_argv(char **argv);
void print_byte(char byte);
void print_flags(void *flags, unsigned bytes);

#endif /* !IO_UTILITY_H */
