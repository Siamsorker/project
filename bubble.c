#include <stdio.h>

void bubble_sort(int *array, int size) {
  int swapped = 1;
  while (swapped) {
    swapped = 0;
    for (int i = 0; i < size - 1; i++) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = 1;
      }
    }
  }
}

int main() {
  int array[] = {90, 80, 30, 70, 20, 10};
  int size = sizeof(array) / sizeof(array[0]);

  bubble_sort(array, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}