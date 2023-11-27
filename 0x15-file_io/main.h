#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void fd_dest(int fd_d, char *file);
void fd_source(int fd_s, char *file);
void close_dest(int fd_value);
void close_source(int fd_value);

#endif
