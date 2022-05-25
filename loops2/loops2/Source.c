#include<stdio.h>

int main() {
	int sayi;
	int fact = 1;
	printf("sayi girinz:");
	scanf("%d",&sayi);
	
	while (sayi > 0) {
		fact *= sayi;
		sayi--;

	}
	printf("fakt=%d", fact);
}