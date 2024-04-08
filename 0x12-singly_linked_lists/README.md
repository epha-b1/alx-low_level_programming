# Project Title

## Project Description

This project is a collection of C programs that work with singly linked lists. It includes functions to print, count, add nodes to the beginning and end of the list, and free the list.

## Table of Contents

- [Requirements](#requirements)
- [Project Files](#project-files)
- [Usage](#usage)
- [Author](#author)

## Requirements

- **Allowed editors:** vi, vim, emacs
- **Compilation:** All files will be compiled on Ubuntu 20.04 LTS using gcc with the following options:

-Wall -Werror -Wextra -pedantic -std=gnu89

- **File Endings:** All files should end with a new line.
- **README:** A README.md file, at the root of the folder of the project, is mandatory.
- **Coding Style:** The code should follow the Betty style, and it will be checked using betty-style.pl and betty-doc.pl.
- **Global Variables:** Global variables are not allowed.
- **Function Limit:** No more than 5 functions per file.
- **Library Functions:** The only C standard library functions allowed are `malloc`, `free`, and `exit`. Functions like `printf`, `puts`, `calloc`, `realloc`, etc., are forbidden.
- **Allowed Function:** You are allowed to use `_putchar`, but you don't have to push `_putchar.c` as we will use our own file.
- **Header File:** The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`. Don't forget to push your header file.
- **Include Guard:** All your header files should be include guarded.

## Project Files

1. **0-print_list.c**
 - **Description:** Function to print all elements of a list.
 - **Prototype:** `size_t print_list(const list_t *h);`
 - **Return:** Number of nodes.
 - If `str` is NULL, print `[0] (nil)`.
 - Allowed to use `printf`.

2. **1-list_len.c**
 - **Description:** Function to return the number of elements in a list.
 - **Prototype:** `size_t list_len(const list_t *h);`

3. **2-add_node.c**
 - **Description:** Function to add a new node at the beginning of a list.
 - **Prototype:** `list_t *add_node(list_t **head, const char *str);`
 - **Return:** The address of the new element, or NULL if it failed.
 - `str` needs to be duplicated.
 - Allowed to use `strdup`.

4. **3-add_node_end.c**
 - **Description:** Function to add a new node at the end of a list.
 - **Prototype:** `list_t *add_node_end(list_t **head, const char *str);`
 - **Return:** The address of the new element, or NULL if it failed.
 - `str` needs to be duplicated.
 - Allowed to use `strdup`.

5. **4-free_list.c**
 - **Description:** Function to free a list.
 - **Prototype:** `void free_list(list_t *head);`

## Usage

1. Clone the repository:

git clone https://github.com/paschalugwu/alx-low_level_programming.git


2. Navigate to the project directory:

cd alx-low_level_programming/0x12-singly_linked_lists


3. Compile and run the programs. For example:

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
./a

markdown


4. Repeat the process for other program files.

## Author

- [Paschal Ugwu](https://github.com/paschalugwu) - GitHub: [paschalugwu](https://github.com/paschalugwu)
