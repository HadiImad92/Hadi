#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int large, i;
  int arr[7] = {10, 70, 50, 13, 8, 60, 33};
  large = arr[0];
  printf("%d\n", large);

  for (i = 1; i < 7; i++) {
    printf("%d\n", arr[i]);
    if (arr[i] > large)
      large = arr[i];
  }

  printf("Der Größter Wert ist: %d", large);
  return 0;
}
