#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> //exit,atexit ve abort fonksýyonlarý için bu kütüphaneye gerek var

//PROGRAMI SONLANDIRMA NASIL OLUYOR?

/* normal termination      > exit fonksiyonuna çaðrý yapar
*							bazý þartlarý yerýne getýrýp programý sonlandýrýr
*							exit() fonk. direk programý sonlandýrýr, program direk durur
*							return ise sadece fonksiyonu sonlandýrýr biz return statement ile sonlandýrýyoz genelde
* 
* abnormal termination      >abort fonksiyonuna çaðrý yapar
							//direk sonlandýrýyor
							// abortla sonlanýnca da bilgi verýyor
*/

	/* 1- EXÝT FONKS.YAPISI
	* void exit(int status); 0:baþarý ile sonlandý ,1: baþarýsýz
	*/
	//EXÝT FONSK. ÝÇÝN F1 VE F2 FONKSIYONLARI
void f1() {
	printf("f1\n");
	exit(1);

}
void f2() {
	printf("f2\n");
	exit(0);
}
//ATEXÝT fonksiyonu:
//ATEXÝT:program sonlandýktan sonra çalýþýyor ,en son görev gibi düþün, stack yapýsýyla çalýþýr.
//int atexit (void(*func)(void)); 
//ATEXÝT ÝÇÝN F3 VE F4 FONKSIYONLARI
void f3() {
	printf("f3\n");
	
}
void f4() {
	printf("f4\n");
	
}

int main() {
	//EXÝT FONKSIYONU
/*	f1();
	f2();
	printf("samed\n");
	exit(0);
*/
	//atexit fonksiyonu
	
	atexit(f3); //önce taslaða kaydedip sonra sonlandýrýlmasý gerekýyor.
	atexit(f4);
	printf("samed\n");
	exit(EXIT_SUCCESS); //baþarýlý bir þekilde sonalndýrýldý demek oluyor

	
	//ABORT FONKSIYONU
	//abort();    <<<<<//PROGRAMI HEMEN SONLADIRIYOR ve uyarý verýyor;
}