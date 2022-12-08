#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int i, j, k, c;

  // definieren des ersten Feldes

  char const *woerter[] = {"§", "=", "?", "*", "@", "#", "°", "-"};
  int wort_anzahl1 = sizeof(woerter) / sizeof(woerter[0]); // ElementenAnzahl bestimmen

  //difinieren des zweiten Feldes

  char const *woerter1[] = {"ß", "€", "<", ">", "2", "m", "g", "x"};
  int wort_anzahl2 = sizeof(woerter1) / sizeof(woerter1[0]);// ElementenAnzahl bestimmen

  char const *woerter2[] = {"ich Wünsch Ihnen Frohe Weihnachten","I wish you a Merry Christmas", "Je vous souhaite un joyeux Noël"};
  int wort_anzahl3 = sizeof(woerter2) / sizeof(woerter2[0]);// ElementenAnzahl bestimmen


  srand(time(0));//neue Zeichen erzeugen bei jedem START

  printf("\n");
  printf("         \\/\n");
  printf("         /\\");
  printf("\n");

  for (int i = 1; i <= 10; i++) {
  //Platzierung der Elemente
    for (int k = i; k <= 9; k++) {
      printf(" ");
    }
// Ausgabe der Elemente
    for (int j = 1; j <= i; j++) {

       if (j == 2) // Verdopplung vermeiden
       {
        printf("w");
       } else if (j == 4 )
       {
        printf("e");
       } else if (j == 6)
       {
        printf("i");
       } else if (j == 8)
       {
        printf("h");
       }
       else
       {
        int gruppe1 = (rand() % wort_anzahl1); //zufälliger Zeichen ausgeben
       printf(woerter[gruppe1]);
       }
    }

    //Wiederholung der Ausgabe
    for (int j = 1; j <= i; j++) {
    if (j == 2)
       {
        printf("y");
       } else if (j == 2 )
       {
        printf("ü");
       } else if (j == 4)
       {
        printf("ä");
       } else if (j == 6)
       {
        printf("ö");
       }else if (j == 8)
       {
        printf("h");
       }
       else
       {
        int gruppe2 = (rand() % wort_anzahl2);
        printf(woerter1[gruppe2]);
       }
    }

    //Zeilenumbruch nach jedem Durchlauf
    printf("\n");
  }

  printf("         \\/\n");
  printf("         /\\\n");
  printf("         \\/\n");
  printf("         /\\\n");

int gruppe3 = (rand() % wort_anzahl3); //zufälliger Zeichen ausgeben
printf(woerter2[gruppe3]);
printf("\n");

  return 0;
}
