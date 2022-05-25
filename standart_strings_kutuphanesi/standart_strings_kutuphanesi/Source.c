#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> //STANDART STRINGS KUTUPAHNES�

#define size 100					
					/*******************************/
					//STANDART STRINGS KUTUPAHNES� DERSLER�

int main() {

	//strlen(); bir stringin uzunlugunu bulur,geri d�n�� de�eri tamsay�d�r,parametresi const char*'d�r
	//strlen(); null karakteri saymazz
	printf("strlen fonskiyonu\n");
	char dizi[size] = "samed";
	int lenght = strlen(dizi);
	printf("%d\n", lenght);



	//strcpy(); // bir stringi bir yerden ba�ka bir yere kopyal�yor
	// char*strcpy( char*dest,const char*source); //sourceyi destin �zerine kopyal�yor
	printf("strcpy fonskiyonu\n");
	char dizi2[size] = "samed";
	char dizi3[size] = "baskin";
	puts(dizi2);
	puts(dizi3);
	strcpy(dizi2, dizi3); //dizi3tekileri dizi2 ye  yazar;
	puts(dizi2); //ikiside baskin oldu
	puts(dizi3);


	//strcat(); bir stringin sonuna ba�ka bir stribgi ekler;
	// char*strcat(char*s,const char* s1); //s1'i s'in sonuna ekler 
	printf("strcat fonskiyonu\n");
	char dizi4[size] = "eem&";
	char dizi5[size] = "bm";
	puts(dizi4);
	puts(dizi5);
	printf("strcat den sonra: \n");
	strcat(dizi4, dizi5); //dizi5tekileri dizi4�n sonuna ekler;
	puts(dizi4);



	/************************/
	//"strchr" fonsk�yonu karakter ar�yor //buldugu yer�n adres�n� d�nd�r�yor 
	// char*strchr(const char*str,int chr); //ikinci parametre birinci parametrede aranacak
	//char*strrchr(const char*str,int chr); //ikinci parametre birinci parametrede aranacak ama sondan ba�layarak
	printf("strchr fonskiyonu\n");
	char abc[size] = "senin adin zeynep kizim";
	char* p = strchr(abc, 'n');
	if (p == NULL)
		printf("\nbulunamadi");
	printf("\nkarakter bulundu indisi: %d\n", p - abc + 1);



	//strstr fonksiyonu bir yaz�n�n i�nde ba�ka bir yaz� arama�m�z sa�l�yor
	//char*str(const char*s1,const char*s2)// s1'in i�inde s2 yaz�s�� alanacak
	printf("strstr fonskiyonu\n");
	char s1[size];
	char s2[size];
	printf("stringleri giriniz");
	gets_s(s1, size);
	gets_s(s2, size);

	char* p1 = strstr(s1, s2);
	if (p1 == NULL) {
		printf("\nbulunamadi");
	}
	else {
	printf("\cumle bulundu indisi: %d\n", p1 - s1 + 1);
}

	
	//strcmp,stricmp fonks�yonlar�
	//iki yaz�y� ilk harften ba�layarak k�yasl�yara ilerliyor e�it olmayan yerde duruyor asc� numaras�na g�re birinci yaz� b�y�kse:+,ikinci b�y�kse:- e�itse:0 d�nd�royr
	printf("\nstrcmp fonskiyonu\n");
	char s3[size];
	char s4[size];
	strcpy(s3, "abc");
	strcpy(s4, "Abc");
	int result = strcmp(s3, s4);
	if (result < 0) {
		printf("ikinci yazi daha buyuk\n");
	}
	else if (result > 0) {
		printf("birinci yazi daha buyuk\n");
	}
	else {
		printf("iki yazida esit\n");
	}
	/************************************/
	
	printf("\nstricmp fonskiyonu\n");

	int result2 = _stricmp(s3, s4);
	if (result2 == 0) {
		printf("iki yazida esit");
	}
	else {
		printf("iki yazi esit degil");
	}

	

}