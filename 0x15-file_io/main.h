#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
char *create_buffer(char *file);
void close_file(int fd);
int main(int argc, char *argv[]);

#endif
