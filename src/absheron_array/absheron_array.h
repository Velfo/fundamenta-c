//
// Created by Vugar Aghayev on 17/11/2025.
//

#ifndef FUNDAMENTA_C_ABSHERON_ARRAY_H
#define FUNDAMENTA_C_ABSHERON_ARRAY_H

/**
 * Provides capacity and then uses rand() to fill the array with integers.
 * Returns a pointer to the created array.
 */
int *
init_array(int capacity);

/**
 * Populates the initialised array with random integers.
 */
int *
populate_array(int *arr);

/**
 * Prints the initialised array.
 */
void
print_array(int *arr);

/**
 * Genarates random array
 * @param cap
 */
int *
generate_rand_arr(int cap);

/**
 * Destroys the initialised array.
 */
void
destroy_array(int *arr);

#endif //FUNDAMENTA_C_ABSHERON_ARRAY_H