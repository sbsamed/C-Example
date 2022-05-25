#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void puts1(const char* s);  
char* gets1( char* s);
char* gets2(char* s,int size);



int  main() {
	char name[] = "samed"; // c dilinde string yok char t�r�yle olu�turulan dizilerle tutuyoruz, son karakterden sonra her zaman null karakter er al�r
	printf("%s\n", name);

	printf("string'in boyutu:%zu\n", sizeof(name)); //stringin boyutu=her b�r kakrekter+sondaki null// e�er null olmassa hata ver�r 

	name[2] = 'w';
	printf("2.indisteki elemani degistik:%s\n", name); //dizi oldu�undan istedi�imiz karekter� dizilerle de�i�ebilirz

	//name[6] = 'd'; null karakteri de�i�emessin!!

	printf("null karakterinin degeri:%d\n", '\0'); // null karakterinin de�eriini g�steriri 

	char dizi1[] = "bugun kotu bir gun";//bo�luk b�rakarak yapab�l�yoruz
	printf("bosluk birakarakta yaziyoruz:%s\n", dizi1);

	char dizi2[] = { 'a','l','i','\0' }; //ilk de�er atamas� yaparsan null karakter�de eklemel�s�n sonuna
	printf("ilk deger atamasini biz yaptik:%s\n", dizi2);



						/*****************************************/
							//2.V�DEO PUT VE GET FONKSIYONU


	char ad[20];
	char soyad[30];
	char putsname[30];// a�a��larda kulland�k putsname ad�nda char dizisi !

	printf("\nad-soyad gir:");
	scanf("%s", ad);
	scanf("%s", soyad); //bo�luk karakter�nden sonra soyad� al�r samed' 'bask�n;
	printf("adsoyadi girdik :ad:%s , soyad:%s\n", ad, soyad);

	printf("\nPUTS FONSKYIONUNUN KULLANIMI\n");

	//put fonks�yonu //sadece stringlere �zel //printf i�te amk
	printf("puts fonksiyonu ile girilen soyadi gosteriyoruz:");
	puts(soyad);
	//gets_s fonksiyonu // scanf i�te amk //scanfden farkl� olarak bo�luk karakter�n�de al�r sadece null karakter�n� almaz enter tu�u yani
	printf("\nGETS_S FONKSIYONUNUN KULLANIMI\n");
	gets_s(putsname, 10); //putsname i�in 10 karakterl�k  input al�yor; //scanfden fark� bo�luk karakterler�n� de al�yor// c dilinden kald�r�ld� visual stud�oda kullan�l�yor ama
	puts(putsname); //gets_s ile ald�g��z de�eri yazd��yporuz




					/***************************************************************/
					//3.V�DEO	PUTS  ve GETS FONKSIYONUNU BIZ YAZIYORUZ-- FONKSIYONLAR A��IDA

	puts1("3.VIDEO puts1 fonksiyonumuz");

	//getts_s fonk�yonumuz i�in
	char dizi4[50];
	gets2(dizi4, 10); // kendi fonks�yonumuz ile karakter ald�k
	printf("get fonksiyopnu ile aldigimiz karakterleri puts1 ile yazdiriyoruz\n");
	puts1(dizi4); // yukarda ald�g�m�z karakterleri yazd�rd��k



									/****************************/
									//4.V�DEO karakter pointerlar�
	printf("\n POINTER TO STRING \n");

	const char* ptr = "samed";
	char ptr1[8] = "samed"; //ikisi aras�ndak� fark usttek� const olmak zorunda *PTR �ZER�NDE de�i�iklik yap�lamaz
	printf("*ptr adresi: %p\n", ptr);	// adresi g�steririr
	printf("ilk karakter: %c\n", *ptr); //ilk karekteri yazd�r�r�r
	printf("pointor to stringi for dongusu ile yazdiriyoruz\n");
	for (int i = 0; i < 6; i++) {
		printf("%c", *(ptr + i));
	}

	/**************************************************************************/
	//                     EXAMPLE                       //


//string diziyi tersten yazd�rma

	char example[50];
	int lenght = 0;
	printf("\ntersten yazdirma icin karakterleri giriniz\n");
	scanf("%s", example);
	for (int i = 0; example[i] != '\0'; ++i) {
		lenght++;
	}
	for (int i = 0; i < (lenght / 2); i++) {
		char temp = example[i];
		example[i] = example[lenght - i - 1];
		example[lenght - i - 1] = temp;
	}
	printf("tersten yazillmis hali:\n");
	puts(example);

	///////////////////////////////////////////////////////////////////////////////////
	// �K� STR�NG� B�RLE�T�RME / video ile ayn� ama �al��m�yor amk


	/*
	char example2[50];
	char example22[50];
	int lenght1 = 0,lenght2=0;
	printf("\nbirlestirme icin karakterleri giriniz\n");
	scanf("%s,%s", example2, example22);

	for (int i = 0; example2[i] != '\0'; ++i) {
		lenght1++;
	}

	for (int i = 0; example22[i] != '\0'; ++i) {

		example2[lenght1++] = example22[i];
	}
	example2[lenght1] = '\0';
	printf("birlestirilimis hali:\n");
	puts(example2); */

	/**************************************************/
													/**************************************************/
//   c�mlenin ka� s�zc�kten oldugunu bulma olu�tudugunu bulma
	printf("stringin kac cumleden olutugunu bulma\n");
	char example4[20] = "samed baskin";
	int boyut = 1;
	for (int i = 0; example4[i] != '\0'; i++) {
		if (example4[i] == ' ')
			++boyut;

	}
	printf("example4 kac kelimedir ?:  %d\n ", boyut);


	/*******************************************/
	// kucuk harfleri buyuk buyuk harfleri kucuk yapma
	printf("kucuk harfleri buyuk buyuk harfleri kucuk\n");
	char example5[15] = "SaMeD BasKIn";
	for (int i = 0; example5[i] != '\0'; i++) {
		if (example5[i] <= 'Z' && example5[i] >= 'A')
			putchar(example5[i] + 32);
		else if (example5[i] <= 'z' && example5[i] >= 'a')
			putchar(example5[i] - 32);
		else 
			putchar(example5[i]);
	}
	/*********************************************************************/
	//example 5 cumledeki bharf kharf vce ozel karakter sayisi bulma

	printf("\ncumledeki bharf kharf vce ozel karakter sayisi bulma\n");
	char example6[50] = "SaMed58bAskiN23";
	int b = 0, k = 0, o = 0;
	for (int i = 0; example5[i] != '\0'; i++) {
		if (example6[i] <= 'Z' && example6[i] >= 'A')
			++b;
		else if (example6[i] <= 'z' && example6[i] >= 'a')
			++k;
		else
			++o;
	}
	printf("\nbuyuk harf=%d, kucuk harf=%d, ozel karakter=%d\n" ,b, k, o);

			//////*EXAPMLE 7*/////////////
			//kac tane sesli harf var?///
	
	char example7[] = "smeodbaskiun";
	printf("\nkac tane sesli harf var: %d\n",ssbulma(example7));





			/*ENEGRAM S�ZC�KLER� BULMA*/
				//EXAMPLE-8
	char example8[6] = "samed";
	char example88[6] = "demas";
	
	
	
}

 


//sessli harf bulma fonks�yonu
int ssbulma(char* s) {
	static	int temp = 0;
	for (int i = 0; s[i] != '\0'; ++i) {
		switch (s[i]){
		case 'a':
		case 'e':
		case 'i':
		case 'u':
		case'o':
			temp++;
		}
	}
	return temp;
}
			



// -PUTS ve GETS_S FONKSIYONUNU BIZ YAZIYORUZ
void puts1(const char* s) {
	for (;*s  != '\0';*s++) 
		putchar(*s);
		printf("\n");
}


//boyut s�n�rlamas� olmayan gets fonsk�yonu
char* gets1(char* s) {
	
	printf("\ngets1 fonksiyonu icin karakter  giriniz:\n");
	int ch;
	char* temp = s;
	while ((ch = getchar()) != '\n')
		*s++ = (char)ch;
		*s = '\0';
		return temp;
}

//boyut s�n�rlamas� olan gets fonsk�yonu

char* gets2(char*s, int size) {
	int ch, n=1;
	char* temp = s;
	
	printf("\ngets2 fonksiyonu icin karakter  giriniz:\n");
	while ((ch = getchar()) != '\n' && n <= size) {
	*s++ = (char)ch;
	n++;
   }
	*s = '\0';
	return temp;

}


