#include <stdio.h>

float probability_of_rain(float temperature, float humidity)
 {
  if (temperature < 10) 
  {
    return 0.1 * (humidity / 100); 
  } else if (temperature < 20)
  {
    return 0.3 * (humidity / 100);
  } else if (temperature < 30) 
  {
    return 0.5 * (humidity / 100); 
  } else {
    return 0.7 * (humidity / 100); 
  }
}

int main() {
  float temperature, humidity, rain_probability;

  printf("Enter the temperature in degrees Celsius: ");
  scanf("%f", &temperature);

  printf("Enter the humidity in percentage: ");
  scanf("%f", &humidity);

  if (humidity < 0 || humidity > 100)
   {
    printf("Error:Invalid humidity input,Humidity must be between 0 and 100.\n");
    return 1;
  }

  rain_probability = probability_of_rain(temperature, humidity);

  printf("The probability of rain is %f.\n", rain_probability);

  return 0;
}

