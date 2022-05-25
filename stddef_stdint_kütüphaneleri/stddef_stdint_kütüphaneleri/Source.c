#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<stddef.h> //size_t nin typedif bildirimi burada var
#include<stdint.h> // tam sayýlarla ilgili kütüphane

//  _t ile bitenler baþka bir türün yerine geçebiliyor (baþka bir türün eþ ismi)
//	typedif bilfirimi gibi düþün
int main() {
	size_t x; //unsigned int //yazý boyutu//dizi boyutu gibi yerlerde kulanýlýr

	//stdint kütüphanesi
	int32_t ival = 20;  //int türü bu kadar byte olabilir diyor
	printf("%zu\n", sizeof(ival));
	int_fast16_t ival2 = 25; //en fazla bu kadar byte olabilir diyor
	printf("%zu\n", sizeof(ival2));
	int_least32_t ival3 = 26; //en az bu kadar byte olabilir diyor
	printf("%zu\n", sizeof(ival3));


	//LÝTTLE ENDIAN & BIG ENDIAN
	//nikroiþlemcinin mimarisine göre kayýt etmeye küçük hafýza adresinden baþlamsý veya büyük hafýzadan baþlamasý
	//intel little //motorola big

	int endian = 1;
	
	char* ptr = &(char*)endian;
	
	if (*ptr)
		printf("little");
	else
	printf("big");



}