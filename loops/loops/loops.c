#include<stdio.h>

int main() {
	int sayi;
	int toplam = 0;
	printf("sayi giriniz:");
	scanf_s("%d", &sayi);
	while (sayi>0) {
		toplam += sayi;
		sayi--;
	}
	printf("toplam=%d", &toplam);
	
}


