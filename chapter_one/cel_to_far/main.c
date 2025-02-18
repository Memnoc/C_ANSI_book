#include <stdio.h>

int main(void) {
  printf("=== Temperature Converter: Celsius to Fahrenheit ===\n");
  printf("Celsius  Fahrenheit\n");
  printf("-------------------\n");

  float fahr, celsius;
  int upper, lower, step;

  lower = 0;   // Starting at 0°C
  upper = 100; // Going up to 100°C (changed from 300 since this is now Celsius)
  step = 5;    // Smaller step size since Celsius scale is larger
  celsius = lower;

  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32.0; // Formula for C to F
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}
