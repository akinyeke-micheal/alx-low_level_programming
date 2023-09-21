# Singly Linked Lists in C

## Overview
This repository contains an implementation of singly linked lists in C. Singly linked lists are a fundamental data structure used to store a collection of elements where each element points to the next one in the sequence.

## Table of Contents
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Compilation](#compilation)
- [Usage](#usage)
  - [Example](#example)
- [List of Functions](#list-of-functions)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

### Prerequisites
Before you can use this singly linked list implementation, you need to have the following installed on your system:
- [GCC](https://gcc.gnu.org/) or another C compiler for compilation

### Compilation
To compile the source code, run the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o singly_linked_list
This will generate an executable named singly_linked_list.

Usage
You can use this implementation of singly linked lists in your C programs. Simply include the header file lists.h in your code and link against the compiled object files.

Example
c
Copy code
#include "lists.h"

int main(void)
{
    list_t *head = NULL;

    add_node_end(&head, "Hello");
    add_node_end(&head, "World");

    print_list(head);

    free_list(head);

    return (0);
}
List of Functions
Here is a list of functions provided by this implementation:

list_t *add_node_end(list_t **head, const char *str): Add a new node at the end of the list.
size_t print_list(const list_t *h): Print all the elements of a list.
size_t list_len(const list_t *h): Return the number of elements in a list.
void free_list(list_t *head): Free all elements of a list.
For more details on each function, please refer to the source code and comments.

Contributing
Contributions to this project are welcome. If you would like to make improvements or add new features, please open an issue or submit a pull request.

License
This project is licensed under the MIT License - see the LICENSE file for details.
