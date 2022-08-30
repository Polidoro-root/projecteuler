#include <stdio.h>
#include <math.h>

int const power = 2;

int getSumOfSquaresUntilMaxValue(int maxValue) {
  int counter = 0;

  for (int current = 1; current <= maxValue; current++) {
    counter += pow(current, power);
  }

  return counter;
}

int getSquareOfSumUntilMaxValue(int maxValue) {
  int counter = 0;

  for (int current = 1; current <= maxValue; current++) {
    counter += current;
  }

  return pow(counter, power);
}

void main () {
  int const maxValue = 100;

  int const sumOfSquares = getSumOfSquaresUntilMaxValue(maxValue);

  int const squareOfSum = getSquareOfSumUntilMaxValue(maxValue);

  int const difference = squareOfSum - sumOfSquares;

  printf("Sum of the squares: %d\n", sumOfSquares);
  printf("Square of the sum: %d\n", squareOfSum);
  printf("Difference: %d", difference);
}
