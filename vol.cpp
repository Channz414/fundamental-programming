#include <stdio.h>

int main()
{ 
	float sisi, volume;
	
	printf("Masukkan sisi kubus: ", sisi);
	scanf("%f", &sisi);
	
	volume = sisi * sisi * sisi;
	printf("Jadi volume kubus tersebut adalah %.2f", volume);
	
	return 0;
}