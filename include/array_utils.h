#ifndef UTILS_H
#define UTILS_H

/**
 * Prints an array.
 * @param arr Array to print.
 * @param n Size of the array.
 */
void print_array(const int *arr, int n);

/**
 * Fills an array with random integers within a range.
 * @param arr Array to fill.
 * @param n Size of the array.
 * @param min Lowest bound of the range.
 * @param max Highest bound of the range.
 */
void fill_array_random(int *arr, int n, int min, int max);


/**
 * Finds the maximum value of an array.
 * @param arr Array to find the max of.
 * @param n Size of the array.
 */
int find_max(int *arr, int n);

/**
 * Finds the minimum value of an array.
 * @param arr Array to find the max of.
 * @param n Size of the array.
 */
int find_min(int *arr, int n);


#endif UTILS_H