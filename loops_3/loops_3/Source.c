
#include<stdio.h>


int faktorýyel(int x) {
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
	printf("cevap=%d", faktorýyel(sayi));
	
}