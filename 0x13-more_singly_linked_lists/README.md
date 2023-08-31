# **0x13-more_singly_linked_lists**


## **TECHNOLOGY AND REQUIREMENTS**

+ Allowed editors: vi, vim, emacs.
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
* All your files should end with a new line.
+ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
* No more than 5 functions per file
+ The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden.
- You are allowed to use _putchar.
+ The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
- All your header files should be included guarded.

### **Files**
+ All of the following files are programs written in C:

|Filename|	Description|
|---------|-------------|
|0-print_listint.c|	Prints all the elements of a listint_t list
|1-listint_len.c|	Returns the number of elements in a linked listint_t list
|2-add_nodeint.c|	Adds a new node at the beginning of a listint_t list
|3-add_nodeint_end.c|	Adds a new node at the end of a listint_t list
|4-free_listint.c	|Frees a listint_t list
|5-free_listint2.c|	Frees a listint_t list
|6-pop_listint.c|	Deletes the head node of a listint_t linked list, and returns the head node's data (n)
|7-get_nodeint.c|	Returns the nth node of a listint_t linked list
|8-sum_listint.c|	Returns the sum of all the data (n) of a listint_t linked list
|9-insert_nodeint.c|	Inserts a new node at a given position
|10-delete_nodeint.c|	Deletes the node at index index of a listint_t linked list
|100-reverse_listint.c|	Reverses a listint_t linked list
|101-print_listint_safe.c|	Prints a listint_t linked list
|102-free_listint_safe.c|	Frees a listint_t list
|103-find_loop.c|	Finds the loop in a linked list
