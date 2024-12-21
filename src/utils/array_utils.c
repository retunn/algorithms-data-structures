#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array_utils.h"

// Prints an array
void print_array(const int *arr, int n) {
  for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Fills array with random values within a range 
void fill_array_random(int *arr, int n, int min, int max) {
  srand((unsigned int) time(NULL));
  for(int i = 0; i < n; i++) {
    arr[i] = (rand() % (max - min + 1)) + min;
  }
}

// Finds max of an array 
int find_max(int *arr, int n) {
  if(n <= 0) {
    fprintf(stderr, "Error: Array size must be greater than 0.\n");
    return -1;
  }

  int max = arr[0];
  for(int i = 1; i < n; i++) {
    if(arr[i] > max) {
      max = arr[i];
    }
  }

  return max;
}

// Finds min of an array 
int find_min(int *arr, int n) {
  if(n <= 0) {
    fprintf(stderr, "Error: Array size must be greater than 0.\n");
    return -1;
  }

  int min = arr[0];
  for(int i = 0; i < n; i++) {
    if(arr[i] < min) {
      min = arr[i];
    }
  }

  return min;
}