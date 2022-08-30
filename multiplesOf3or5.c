#include <stdio.h>

void main() {
  int const MAX_INDEX = 1000;

  int counter = 0;

  for (int index = 1; index < MAX_INDEX; index++) {
    if (index % 3 == 0 || index % 5 == 0) {
      counter += index;
    }
  }

  printf("\n\nResult: %d", counter);
}
