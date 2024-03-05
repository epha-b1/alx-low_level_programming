#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdint.h>
#include <elf.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
void print_magic(unsigned char e_ident[]);
void print_class(unsigned char e_ident[]);
void print_data(unsigned char e_ident[]);
void print_version(unsigned char e_ident[]);
void print_osabi(unsigned char e_ident[]);
void print_abiversion(unsigned char e_ident[]);
void print_type(uint16_t e_type);
void print_entry(uint64_t e_entry);


#endif /* MAIN_H */
