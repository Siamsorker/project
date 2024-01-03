#include <stdio.h>

void selection_sort(int *array, int size) {
  for (int i = 0; i < size - 1; i++) {
    int min = i;
    for (int j = i + 1; j < size; j++) {
      if (array[j] < array[min]) {
        min = j;
      }
    }

    int temp = array[i];
    array[i] = array[min];
    array[min] = temp;
  }
}

int main() {
  int array[] = {90, 80, 30, 70, 20, 10};
  int size = sizeof(array) / sizeof(array[0]);

  selection_sort(array, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}