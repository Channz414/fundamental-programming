#include <stdio.h>

int main()
{ 

	float celcius,fahrenheit;

	printf("Masukkan derajat celcius: ", celcius);
	scanf("%f", &celcius);
	
	fahrenheit = (celcius * 9/5) + 32;
	printf("Jadi %f derajat celcius sama dengan %.1f derajat fahrenheit", celcius, fahrenheit);
	
	return 0;
}