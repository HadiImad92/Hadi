#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int array[7] = {10, 40, 30, 22, 11, 69, 120};

  int large = array[0];
  int i;

  for(i = 1; i < 6; i++) {
    
    if(large > array[i]) {
      large = array[i];
      printf("%d", array[i]);
    }
  }
  

  

   return 0;
}


