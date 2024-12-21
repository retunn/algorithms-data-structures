#include <stdio.h> 
#include <stdbool.h>
#include "array_utils.h"

// Helper function to compare arrays
bool arrays_are_equal(int *arr1, int *arr2, int n) {
  for(int i = 0; i < n; i++) {
    if(arr1[i] != arr2[i]) return false;
  }

  return true;
}

// Test the print_array function
void test_print_array() {
  printf("Testing print_array:\n");
  int arr[] = {1, 2, 3, 4, 5};
  printf("Expected output: 1 2 3 4 5\n");
  printf("Actual output: ");
  print_array(arr, 5);
}

// Test the fill_array_random function
void test_fill_array_random() {
  printf("Testing fill_array_random...\n");
  int arr[5];
  fill_array_random(arr, 5, 0, 10);
  printf("Array filled with random values between %d and %d: ", 0, 10);
  print_array(arr, 5);
  for(int i = 0; i < 5; i++) {
    if(arr[i] < 0 || arr[i] > 10) {
      printf("Test failed: Value out of range at index %d\n", i);
      return;
    }
  }
  printf("Test passed: All values are within range.\n");
}

// Test the find_max function 
void test_find_max() {
  printf("Testing find_max...\n");
  int arr[5] = {10, -20, 5, 15, 1};
  printf("Array to test: ");
  print_array(arr, 5);
  printf("Expected max: 15\n");
  printf("Found max: %d\n", find_max(arr, 5));
}

// Test the find_min function 
void test_find_min() {
  printf("Testing find_min...\n");
  int arr[5] = {10, -20, 5, 15, 1};
  printf("Array to test: ");
  print_array(arr, 5);
  printf("Expected min: -20\n");
  printf("Found min: %d\n", find_min(arr, 5));
}

int main() {
  printf("Running tests for utility functions...\n");

  test_print_array();
  test_fill_array_random();
  test_find_max();
  test_find_min();

  printf("All tests completed.\n");

  return 0;
}
