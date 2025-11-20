#include <stdio.h>
#include "absheron_array/absheron_array.h"

int main(void)
{
    printf("Hello, World!\n");

    int capacity = 20;
    int window   = 3;  // or whatever window size you want

    // Let sliding_window.c allocate the array and set global `arr` + `capacity`
    int *ar = generate_rand_arr(capacity);

    // Fill and print that same array
    populate_array(ar);      // uses the pointer from generate_rand_arr
    print_array(ar);


    return 0;
}