//
// Created by Vugar Aghayev on 17/11/2025.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "absheron_array.h"

static int *arr;
static int capacity;

int *
init_array(int cap)
{
    capacity = cap;
    arr = malloc((size_t)capacity * sizeof *arr);
    if (!arr) {
        perror("malloc");
        return NULL;
    }
    return arr;
}

int *
generate_rand_arr(int cap)
{
    if (cap <= 0) {
        return NULL;
    }
    capacity = cap;
    arr = init_array(capacity);
    return arr;
}

void
destroy_array(int *arr)
{
    free(arr);
    arr = NULL;
}

int *
populate_array(int *a)
{
    if (capacity == 0 || arr == NULL) {
        perror("capacity or array not initialised");
        return NULL;
    }

    srand(time(NULL));

    for (int i = 0; i < capacity; i++) {
        int r = rand() % 100;  // random 0–99
        arr[i] = r;
    }

    return a;
}

void
print_array(int *arr)
{
    if (capacity == 0 || arr == NULL) {
        perror("capacity or array not initialised");
        return;
    }

    printf("elements in the array:\n");
    for (int i = 0; i < capacity; i++)
        printf("%d ", arr[i]);
    printf("\n");
}