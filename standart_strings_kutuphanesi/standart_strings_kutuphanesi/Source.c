#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> //STANDART STRINGS KUTUPAHNESÝ

#define size 100					
					/*******************************/
					//STANDART STRINGS KUTUPAHNESÝ DERSLERÝ

int main() {

	//strlen(); bir stringin uzunlugunu bulur,geri dönüþ deðeri tamsayýdýr,parametresi const char*'dýr
	//strlen(); null karakteri saymazz
	printf("strlen fonskiyonu\n");
	char dizi[size] = "samed";
	int lenght = strlen(dizi);
	printf("%d\n", lenght);



	//strcpy(); // bir stringi bir yerden baþka bir yere kopyalýyor
	// char*strcpy( char*dest,const char*source); //sourceyi destin üzerine kopyalýyor
	printf("strcpy fonskiyonu\n");
	char dizi2[size] = "samed";
	char dizi3[size] = "baskin";
	puts(dizi2);
	puts(dizi3);
	strcpy(dizi2, dizi3); //dizi3tekileri dizi2 ye  yazar;
	puts(dizi2); //ikiside baskin oldu
	puts(dizi3);


	//strcat(); bir stringin sonuna baþka bir stribgi ekler;
	// char*strcat(char*s,const char* s1); //s1'i s'in sonuna ekler 
	printf("strcat fonskiyonu\n");
	char dizi4[size] = "eem&";
	char dizi5[size] = "bm";
	puts(dizi4);
	puts(dizi5);
	printf("strcat den sonra: \n");
	strcat(dizi4, dizi5); //dizi5tekileri dizi4ün sonuna ekler;
	puts(dizi4);



	/************************/
	//"strchr" fonskýyonu karakter arýyor //buldugu yerýn adresýný döndürüyor 
	// char*strchr(const char*str,int chr); //ikinci parametre birinci parametrede aranacak
	//char*strrchr(const char*str,int chr); //ikinci parametre birinci parametrede aranacak ama sondan baþlayarak
	printf("strchr fonskiyonu\n");
	char abc[size] = "senin adin zeynep kizim";
	char* p = strchr(abc, 'n');
	if (p == NULL)
		printf("\nbulunamadi");
	printf("\nkarakter bulundu indisi: %d\n", p - abc + 1);



	//strstr fonksiyonu bir yazýnýn içnde baþka bir yazý aramaýmýz saðlýyor
	//char*str(const char*s1,const char*s2)// s1'in içinde s2 yazýsýý alanacak
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

	
	//strcmp,stricmp fonksþyonlarý
	//iki yazýyý ilk harften baþlayarak kýyaslýyara ilerliyor eþit olmayan yerde duruyor ascý numarasýna göre birinci yazý büyükse:+,ikinci büyükse:- eþitse:0 döndüroyr
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