# Hash Tables Project

This project implements hash tables in C, focusing on specific requirements and utilizing the djb2 hashing algorithm. The goal is to create a functional hash table adhering to given guidelines for tasks such as insertion, retrieval, deletion, and handling collisions.

## Table of Contents

- [Requirements](#requirements)
- [Data Structures](#data-structures)
- [Tests](#tests)
- [Tasks](#tasks)
  - [0. >>> ht = {}](#0-ht--)
  - [1. djb2](#1-djb2)
  - [2. key -> index](#2-key---index)
  - [3. >>> ht['betty'] = 'cool'](#3-htbetty--cool)
  - [4. >>> ht['betty']](#4-htbetty)
  - [5. >>> print(ht)](#5-htprintht)
  - [6. >>> del ht](#6-htdel-ht)
  - [7. $ht['Betty'] = 'Cool'](7-htbetty--cool)
  
## Requirements

- Allowed editors: vi, vim, emacs
- Compiled on Ubuntu 20.04 LTS using gcc with specific options
- Code follows the Betty style
- No global variables allowed
- Max 5 functions per file
- C standard library is allowed
- Prototypes included in a header file (hash_tables.h)
- Header files include guarded
- ...

## Data Structures

The project uses the following data structures:

```c
typedef struct hash_node_s {
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s {
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Tests

Encouraged to work together on a set of tests. Python dictionaries are mentioned as a reference for understanding.

## Tasks

### 0. >>> ht = {}

Write a function that creates a hash table.

Details:
- Creates an empty hash table with a specified size.
- Returns a pointer to the newly created hash table.
- Returns NULL if an error occurs.

...

### 1. djb2

Write a hash function implementing the djb2 algorithm.

Details:
- Uses the djb2 hashing algorithm.
- Converts a string into a hash value.

...

### 2. key -> index

Write a function that gives you the index of a key.

Details:
- Utilizes the previously implemented djb2 function.
- Returns the index at which the key/value pair should be stored in the array of the hash table.

...

### 3. >>> ht['betty'] = 'cool'

Write a function that adds an element to the hash table.

Details:
- Inserts a key/value pair into the hash table.
- Handles collisions by adding the new node at the beginning of the list.

...

### 4. >>> ht['betty']

Write a function that retrieves a value associated with a key.

Details:
- Searches the hash table for the specified key.
- Returns the value associated with the key.
- Returns NULL if the key couldn't be found.

...

### 5. >>> print(ht)

Write a function that prints a hash table.

Details:
- Prints the key/value pairs in the order that they appear in the array of the hash table.
- Uses a specified format.

...

### 6. >>> del ht

Write a function that deletes a hash table.

Details:
- Frees the memory allocated for the hash table and its elements.

...

### 7. $ht['Betty'] = 'Cool'

Implement sorted hash tables with additional features.

Details:
- Utilizes a sorted linked list to handle collisions.
- Inserts key/value pairs in the sorted list at the right place.
- Provides functions to print the hash table in both forward and reverse order.

...
