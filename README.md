# Libft

Libft is a project completed during the 42 curriculum, where the goal is to recreate some of the standard C library functions, as well as additional utility functions.

## Table of Contents
- [Introduction](#introduction)
- [Functions](#functions)
- [Usage](#usage)

## Introduction
The Libft project is the first project in the 42 curriculum, which aims to have students re-implement some of the standard C library functions, as well as a few other utility functions. This project is designed to help students better understand the inner workings of these functions and improve their programming skills.

## Functions
The Libft library includes the following functions:

### Part 1 - Libc Functions
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memccpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strnstr`
- `ft_strncmp`
- `ft_atoi`
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### Part 2 - Additional Functions
- `ft_calloc`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

## Usage
To use the Libft library in your project, follow these steps:

1. Clone the repository to your local machine:
```
git clone https://github.com/HChairiRuya/Libft.git
```
2. Compile the library:
```
make
```
3. Include the header file in your C file:
```c
#include "libft.h"
```
4. Link the library when compiling your project:
```
gcc -o my_program my_program.c -L. -lft
```
