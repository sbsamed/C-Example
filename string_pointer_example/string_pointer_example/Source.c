#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	/**************************************************/
	// kaç  cümlede oluþtudugunu bulma
	char example4[20] = "samed baskin";
	int boyut = 1;
	for (int i = 0; example4[i] != '\0'; i++) {
		if (example4[i] == ' ')
			++boyut;

	}
	printf("example4 kac kelimedir ?:  %d ", boyut);

}
