#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> //exit,atexit ve abort fonks�yonlar� i�in bu k�t�phaneye gerek var

//PROGRAMI SONLANDIRMA NASIL OLUYOR?

/* normal termination      > exit fonksiyonuna �a�r� yapar
*							baz� �artlar� yer�ne get�r�p program� sonland�r�r
*							exit() fonk. direk program� sonland�r�r, program direk durur
*							return ise sadece fonksiyonu sonland�r�r biz return statement ile sonland�r�yoz genelde
* 
* abnormal termination      >abort fonksiyonuna �a�r� yapar
							//direk sonland�r�yor
							// abortla sonlan�nca da bilgi ver�yor
*/

	/* 1- EX�T FONKS.YAPISI
	* void exit(int status); 0:ba�ar� ile sonland� ,1: ba�ar�s�z
	*/
	//EX�T FONSK. ���N F1 VE F2 FONKSIYONLARI
void f1() {
	printf("f1\n");
	exit(1);

}
void f2() {
	printf("f2\n");
	exit(0);
}
//ATEX�T fonksiyonu:
//ATEX�T:program sonland�ktan sonra �al���yor ,en son g�rev gibi d���n, stack yap�s�yla �al���r.
//int atexit (void(*func)(void)); 
//ATEX�T ���N F3 VE F4 FONKSIYONLARI
void f3() {
	printf("f3\n");
	
}
void f4() {
	printf("f4\n");
	
}

int main() {
	//EX�T FONKSIYONU
/*	f1();
	f2();
	printf("samed\n");
	exit(0);
*/
	//atexit fonksiyonu
	
	atexit(f3); //�nce tasla�a kaydedip sonra sonland�r�lmas� gerek�yor.
	atexit(f4);
	printf("samed\n");
	exit(EXIT_SUCCESS); //ba�ar�l� bir �ekilde sonalnd�r�ld� demek oluyor

	
	//ABORT FONKSIYONU
	//abort();    <<<<<//PROGRAMI HEMEN SONLADIRIYOR ve uyar� ver�yor;
}