
#include<stdio.h>


int faktor�yel(int x) {
	int fakt = 1;
	while (x > 0) {
		fakt *= x;
		x--;
	}
	return fakt;
}
int main() {
	int sayi;
	printf("sayi gir:");
	scanf("%d", &sayi);
	printf("cevap=%d", faktor�yel(sayi));
	
}