#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<stddef.h> //size_t nin typedif bildirimi burada var
#include<stdint.h> // tam say�larla ilgili k�t�phane

//  _t ile bitenler ba�ka bir t�r�n yerine ge�ebiliyor (ba�ka bir t�r�n e� ismi)
//	typedif bilfirimi gibi d���n
int main() {
	size_t x; //unsigned int //yaz� boyutu//dizi boyutu gibi yerlerde kulan�l�r

	//stdint k�t�phanesi
	int32_t ival = 20;  //int t�r� bu kadar byte olabilir diyor
	printf("%zu\n", sizeof(ival));
	int_fast16_t ival2 = 25; //en fazla bu kadar byte olabilir diyor
	printf("%zu\n", sizeof(ival2));
	int_least32_t ival3 = 26; //en az bu kadar byte olabilir diyor
	printf("%zu\n", sizeof(ival3));


	//L�TTLE ENDIAN & BIG ENDIAN
	//nikroi�lemcinin mimarisine g�re kay�t etmeye k���k haf�za adresinden ba�lams� veya b�y�k haf�zadan ba�lamas�
	//intel little //motorola big

	int endian = 1;
	
	char* ptr = &(char*)endian;
	
	if (*ptr)
		printf("little");
	else
	printf("big");



}