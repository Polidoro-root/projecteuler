#include <stdio.h>

int isEven(int value) {
  return value % 2 == 0;
}

void main() {
  int const MAX_VALUE = 4000000;

  int counter = 0;
  int previousValue = 0;

  for (
      int currentValue = 1;
      currentValue <= MAX_VALUE;
      currentValue += previousValue
  ) {
    previousValue = currentValue - previousValue;

    if (isEven(currentValue)) {
      counter += currentValue;
    }
  }

  printf("Result: %d\n", counter);
}
