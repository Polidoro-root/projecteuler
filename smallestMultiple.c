#include <stdio.h>

int getIsSmallestMultipleFromRange(int number, int min, int max) {
  int counter = 0;

  for (int i = min; i <= max; i++) {
    if (number % i == 0) {
      counter++;
    }
  }
 
  return counter == max;
}

void main() {
  int counter = 1;
  
  while (1) {
    int isSmallestMultiple =  getIsSmallestMultipleFromRange(counter, 1, 20);

    if (isSmallestMultiple) {
      break;
    }

    counter++;
  }

  printf("\nResult: %d", counter);
}
