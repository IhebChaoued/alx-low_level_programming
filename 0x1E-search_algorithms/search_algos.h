#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/* LIBRARIES */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Task 0 */
int linear_search(int *array, size_t size, int value);

/* Task 1 */
void print_array(int *array, size_t left, size_t right);
int binary_search(int *array, size_t size, int value);

/* Advanced 1 */
int jump_search(int *array, size_t size, int value);

/* Advanced 2 */
int interpolation_search(int *array, size_t size, int value);
/* Advanced 3 */
int _binary_search(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);

/* Advanced 4 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);

/* Advanced 6 */
listint_t *jump_list(listint_t *list, size_t size, int value);

/* Advanced 7 */
skiplist_t *linear_skip(skiplist_t *list, int value);

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
        int n;
        size_t index;
        struct listint_s *next;
} listint_t;
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
        int n;
        size_t index;
        struct skiplist_s *next;
        struct skiplist_s *express;
} skiplist_t;

#endif
