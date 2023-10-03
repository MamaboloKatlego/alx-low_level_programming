#ifndef MAIN_H
#define MAIN_H

void print_abi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
int main(int __attribute__((__unused__)) argc, char *argv[]);
void close_elf(int elf);
void check_elf(unsigned char *e_ident);

#endif