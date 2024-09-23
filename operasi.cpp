#include <stdio.h>
#include <math.h>

int main()
{
	float num1 = 75.92;
	float num2 = 11.233;
	int num3 = 41;
	float sum = num1 + num2 + num3;
	float min = num1 - num2 - num3;
	float multiple = num2 * num3;
	float squareroot = sqrt(num1 + num2);
	
	printf("Hasil penjumlahan %.2f + %.3f + %d adalah %.3f\n", num1, num2, num3, sum);
	printf("Hasil pengurangan %.2f - %.3f - %d adalah %.3f\n", num1, num2, num3, min);
	printf("Hasil pengalian %.3f + %d adalah %.3f\n", num2, num3, multiple);
	printf("Hasil akar dari %.2f + %.3f adalah %.3f\n", num1, num2, squareroot);
	

	return 0;	
}