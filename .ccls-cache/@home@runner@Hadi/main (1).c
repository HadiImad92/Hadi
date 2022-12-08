#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int i, j, k, i2;
  char const *woerter[] = {"§", "=", "?", "*", "@", "a", "s", "3"};
  int wort_anzahl = sizeof(woerter) / sizeof(woerter[0]);

  char const *woerter1[] = {"ß", "€", "<", ">", "#", "°", "-", "2"};
  int wort_anzahl1 = sizeof(woerter1) / sizeof(woerter1[0]);
  srand(time(0));

  printf("\n");

  printf("         \\/\n");
  printf("         /\\");
  printf("\n");

  for (int i = 1; i <= 10; i++) {
    for (int k = i; k <= 9; k++) {
      printf(" ");
    }

    for (int j = 1; j <= i; j++) {

      int zahl_1 = (rand() % wort_anzahl);
      if (zahl_1 == woerter[0]) {
        printf("#");
      }
      printf(woerter[zahl_1]);
    }
    for (int j = 1; j <= i; j++) {

      int zahl1 = (rand() % wort_anzahl1);

      printf(woerter1[zahl1]);
    }

    printf("\n");
  }

  return 0;
}
