#include <stdio.h>

int main()
{
	float sisi, keliling;									
	
	printf("Masukkan sisi persegi: ", sisi);				
	scanf("%f", &sisi);
	
	keliling= 4 * sisi;
	printf("Keliling persegi tersebut adalah %.1f", keliling);

	
	return 0;
}