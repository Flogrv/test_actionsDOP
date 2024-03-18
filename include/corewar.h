/*
** EPITECH PROJECT, 2024
** core_war
** File description:
** core_war
*/

#pragma once

#include "../lib/my/my.h"
#include "struct.h"
#include "op.h"

// include lib

#include <stdio.h>
#include <stdlib.h>
//funcs

int print_help(void);
int open_file(char *filename, header_t *header);
int run(char *line);
void free_arr(char **arr);
int is_empty(char *line);
int is_str(char *line);
int is_numstr(char *line);
int not_onlyspace(char *line);
int read_line(FILE *fp, header_t *header);
char *convert_filename(char *filename);
char *create_filename(char *filename);
int create_name_and_write(char *filename, header_t *header);
char *clean_name(char *line);
char *clean_comm(char *line);
void fill_comm(header_t *header, char *line);
void fill_name(header_t *header, char *line);
int is_numstr(char *line);
int is_valid_opcode(char **arr);
int is_str_comment(char *line);
