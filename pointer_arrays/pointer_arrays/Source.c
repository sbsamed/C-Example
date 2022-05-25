#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define size 100


int main() {
	//1-array of strings
	
	char ege_area[4][size] = { "izmir","mugla","afyon","bursa" };
	
	//örnek
	int flag = 0;
	char örnek[size];
	printf("sehir giriniz");
	scanf("%s", örnek);
	for (int i = 0; i < size; ++i) {
		if (_stricmp(ege_area[i], örnek) == 0)
			flag++;
		break;
	}
		if (flag)
		printf("bulundu\n");
	else
		printf("bulunamadi\n");
//2 pointer to string
		int a = 5 ,b = 6,c = 7;
		int* dizi[] = { &a,&b,&c };
		for (int i = 0; i < 3; i++) {
			printf("%d:----%p\n", *dizi[i], dizi[i]);
		}

		int gün, ay, yýl;
		printf("gun ay yil: ");
		scanf(" %d %d %d", &gün, &ay, &yýl);
		char *aylar[] = { "ocak" ,"þubat","mart" };
		printf("girdiginiz ay=%s",aylar[ay-1]);
}