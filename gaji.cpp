#include <stdio.h>

int main()
{ 
	float jam, gj_jam, total;
	
	printf("Masukkan jam kerja perusahaan: ", jam);
	scanf("%f", &jam);
	
	printf("Masukkan gaji perjam:Rp. ", gj_jam);
	scanf("%f", &gj_jam);
	
	total = jam * gj_jam;
	printf("Total gaji karyawan perusahaan sebesar Rp. %.2f", total);
	
	return 0;
}