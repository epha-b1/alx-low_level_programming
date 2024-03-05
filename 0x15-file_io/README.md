# Project: File I/O in C

## Description
This project contains C programs and functions that perform various file I/O operations. Each task is a separate program or function, and they are described below:

### Task 0: Tread lightly, she is near
Write a function that reads a text file and prints it to the POSIX standard output.

- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
- Returns the actual number of letters it could read and print.
- If the file cannot be opened or read, return 0.
- If filename is NULL, return 0.
- If write fails or does not write the expected amount of bytes, return 0.

### Task 1: Under the snow
Create a function that creates a file.

- Prototype: `int create_file(const char *filename, char *text_content);`
- Returns 1 on success, -1 on failure.
- The created file must have permissions: rw-------.
- If the file already exists, do not change the permissions.
- If the file already exists, truncate it.
- If filename is NULL, return -1.
- If text_content is NULL, create an empty file.

### Task 2: Speak gently, she can hear
Write a function that appends text at the end of a file.

- Prototype: `int append_text_to_file(const char *filename, char *text_content);`
- Returns 1 on success and -1 on failure.
- Do not create the file if it does not exist.
- If filename is NULL, return -1.
- If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if it does not exist or if you do not have the required permissions to write the file.

### Task 3: cp
Write a program that copies the content of one file to another.

- Usage: `cp file_from file_to`
- If the number of arguments is incorrect, exit with code 97 and print "Usage: cp file_from file_to" on the standard error.
- If file_to already exists, truncate it.
- If file_from does not exist or cannot be read, exit with code 98 and print "Error: Can't read from file NAME_OF_THE_FILE" on the standard error.
- If you cannot create or if write to file_to fails, exit with code 99 and print "Error: Can't write to NAME_OF_THE_FILE" on the standard error.
- If you cannot close a file descriptor, exit with code 100 and print "Error: Can't close fd FD_VALUE" on the standard error.
- The permissions of the created file are: rw-rw-r--.
- If the file already exists, do not change the permissions.
- The program reads 1,024 bytes at a time from file_from using a buffer.
- You are allowed to use dprintf.

## Usage
To compile the programs, use the provided Makefile. For example, to compile Task 0:

```bash
make 0-read_textfile
