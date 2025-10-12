#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main ()
{
float temperature;
int windspeed;
int humidity;

printf("Enter temperature:\n");
scanf("%f", &temperature);
printf("Enter humidity percent:\n");
scanf("%d", &humidity);
printf("Enter windspeed in km/h:\n");
scanf("%d", &windspeed);

if (temperature > 40)
{
	printf("Heatwave\n");
  }
  else if (temperature < 10)
  {
  	printf("Cold\n");
  }else{
		printf("Normal\n");
	}
if (humidity > 80 || windspeed > 30)
  {
	printf("Storm\n");
  }
if (windspeed > 15)
  {
  	printf("Windy\n");
  }

}