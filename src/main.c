#include <stdio.h>

void insertion_sort(int* vec, int n);
int selection(int* vec, int n, int k);

int main() {

  int vec[5] = {3, 12, -1, 7, 4};
  int sel = selection(vec, 5, 5/2);
  printf("Selection: %d\n", sel);
  for(int i = 0; i < 5; i++) {
    printf("%d ", vec[i]);
  }

  printf("\n");
  return 0;
}

int selection(int* vec, int n, int k) {
  insertion_sort(vec, n);
  return vec[k];
}

void insertion_sort(int* vec, int n) {
  for(int i = 1; i < n; i++) {
    int key = vec[i];
    int j = i - 1;
    while(j >= 0 && vec[j] > key) {
      vec[j + 1] = vec[j];
      j--;
    }
    vec[j + 1] = key;
  }
}