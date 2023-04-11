#include <stdio.h>
void Temperature (double fah_temperature);

int main (void)
{
  double fah_temperature;
  printf("Please enter the Fah temperature: ");

  while (scanf("%lf", &fah_temperature) == 1)
  {
    Temperature (fah_temperature);
    printf("You can enter again (q to quit):");
  }
  return 0;
}

void Temperature (double fah_temperature)
{
  double cel_temperature;
  double kel_temperature;
  const double a = 5.0;
  const double b = 9.0;
  const double c = 32.0;
  const double d = 273.16;

  cel_temperature = a / b * (fah_temperature - c);
  kel_temperature = cel_temperature + d;
  printf("Centigram temperature: %.2f.\n", cel_temperature);
  printf("Fahreheit temperature: %.2f.\n", fah_temperature);
  printf("Kelvin temperature: %.2f.\n", kel_temperature);


}