#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void puts1(const char* s);  
char* gets1( char* s);
char* gets2(char* s,int size);



int  main() {
	char name[] = "samed"; // c dilinde string yok char türüyle oluþturulan dizilerle tutuyoruz, son karakterden sonra her zaman null karakter er alýr
	printf("%s\n", name);

	printf("string'in boyutu:%zu\n", sizeof(name)); //stringin boyutu=her býr kakrekter+sondaki null// eðer null olmassa hata verýr 

	name[2] = 'w';
	printf("2.indisteki elemani degistik:%s\n", name); //dizi olduðundan istediðimiz karekterý dizilerle deðiþebilirz

	//name[6] = 'd'; null karakteri deðiþemessin!!

	printf("null karakterinin degeri:%d\n", '\0'); // null karakterinin deðeriini gösteriri 

	char dizi1[] = "bugun kotu bir gun";//boþluk býrakarak yapabýlýyoruz
	printf("bosluk birakarakta yaziyoruz:%s\n", dizi1);

	char dizi2[] = { 'a','l','i','\0' }; //ilk deðer atamasý yaparsan null karakterýde eklemelýsýn sonuna
	printf("ilk deger atamasini biz yaptik:%s\n", dizi2);



						/*****************************************/
							//2.VÝDEO PUT VE GET FONKSIYONU


	char ad[20];
	char soyad[30];
	char putsname[30];// aþaðýlarda kullandýk putsname adýnda char dizisi !

	printf("\nad-soyad gir:");
	scanf("%s", ad);
	scanf("%s", soyad); //boþluk karakterýnden sonra soyadý alýr samed' 'baskýn;
	printf("adsoyadi girdik :ad:%s , soyad:%s\n", ad, soyad);

	printf("\nPUTS FONSKYIONUNUN KULLANIMI\n");

	//put fonksýyonu //sadece stringlere özel //printf iþte amk
	printf("puts fonksiyonu ile girilen soyadi gosteriyoruz:");
	puts(soyad);
	//gets_s fonksiyonu // scanf iþte amk //scanfden farklý olarak boþluk karakterýnýde alýr sadece null karakterýný almaz enter tuþu yani
	printf("\nGETS_S FONKSIYONUNUN KULLANIMI\n");
	gets_s(putsname, 10); //putsname için 10 karakterlýk  input alýyor; //scanfden farký boþluk karakterlerýný de alýyor// c dilinden kaldýrýldý visual studýoda kullanýlýyor ama
	puts(putsname); //gets_s ile aldýgýýz deðeri yazdýýyporuz




					/***************************************************************/
					//3.VÝDEO	PUTS  ve GETS FONKSIYONUNU BIZ YAZIYORUZ-- FONKSIYONLAR AÞÐIDA

	puts1("3.VIDEO puts1 fonksiyonumuz");

	//getts_s fonkýyonumuz için
	char dizi4[50];
	gets2(dizi4, 10); // kendi fonksýyonumuz ile karakter aldýk
	printf("get fonksiyopnu ile aldigimiz karakterleri puts1 ile yazdiriyoruz\n");
	puts1(dizi4); // yukarda aldýgýmýz karakterleri yazdýrdýýk



									/****************************/
									//4.VÝDEO karakter pointerlarý
	printf("\n POINTER TO STRING \n");

	const char* ptr = "samed";
	char ptr1[8] = "samed"; //ikisi arasýndaký fark ustteký const olmak zorunda *PTR ÜZERÝNDE deðiþiklik yapýlamaz
	printf("*ptr adresi: %p\n", ptr);	// adresi gösteririr
	printf("ilk karakter: %c\n", *ptr); //ilk karekteri yazdýrýrýr
	printf("pointor to stringi for dongusu ile yazdiriyoruz\n");
	for (int i = 0; i < 6; i++) {
		printf("%c", *(ptr + i));
	}

	/**************************************************************************/
	//                     EXAMPLE                       //


//string diziyi tersten yazdýrma

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
	// ÝKÝ STRÝNGÝ BÝRLEÞTÝRME / video ile ayný ama çalýþmýyor amk


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
//   cümlenin kaç sözcükten oldugunu bulma oluþtudugunu bulma
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





			/*ENEGRAM SÖZCÜKLERÝ BULMA*/
				//EXAMPLE-8
	char example8[6] = "samed";
	char example88[6] = "demas";
	
	
	
}

 


//sessli harf bulma fonksýyonu
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


//boyut sýnýrlamasý olmayan gets fonskýyonu
char* gets1(char* s) {
	
	printf("\ngets1 fonksiyonu icin karakter  giriniz:\n");
	int ch;
	char* temp = s;
	while ((ch = getchar()) != '\n')
		*s++ = (char)ch;
		*s = '\0';
		return temp;
}

//boyut sýnýrlamasý olan gets fonskýyonu

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


