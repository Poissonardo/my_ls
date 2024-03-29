/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** internal_functions.h
*/

#pragma once
#include <dirent.h>
#include <stdbool.h>
#include <sys/stat.h>
#include "data_strucs.h"

#define RECURSIVE_FLAG 'R'

int count_dir(DIR *dir_to_count);

void on_invalid_path(char *current_dir);

char *get_args(int argc, char **argv);

char **get_path_list(int argc, char **argv);

void read_entry_directory(struct dirent *fs_item, struct dirent **fs_item_list,
    int *count, args_path_list_passing *args_path_list);

bool is_flag_present(char *args, char flag);

void display(
    struct dirent **fs_item_list, int count, char *args, char *current_dir);

struct dirent **sort(
    struct dirent **fs_item_list, char *args, char *base_path);

void recursive_call(
    struct dirent **fs_item_list, char *current_dir, int i, char *args);

void recursive_check(
    char *current_dir, char *args, struct dirent **fs_item_list);

char *prepare_path_string(char *base_path);

char *path_name_handling(char *path_name);

char *get_dir_path(char *current_dir, struct dirent **fs_item_list, int i);

bool check_forbiden_dir(char *dir_name);

char *build_fs_item_path(char *current_dir, char *fs_item_name);

char **str_to_date_array(char *str);

char *parse_date(char *str);

void display_variable_len(struct stat *fs_item_stat, struct dirent *fs_item);

void display_constant_len(struct stat *fs_item_stat);

void display_total_elements_size(
    struct dirent **fs_item_list, char *current_dir);
