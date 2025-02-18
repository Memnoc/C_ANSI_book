#include <stdio.h>

int main(void) {
  printf("=== Temperature Converter ===\n");

  float fahr, celsius;
  int upper, lower, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    // celsius = 5 * (fahr - 32) / 9;
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}
