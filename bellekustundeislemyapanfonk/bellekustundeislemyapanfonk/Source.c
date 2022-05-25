#include<stdio.h>
#include<string.h>
int main() {

	/*MEMSET FONKSIYONU*/
	printf("MEMSET FONKSIYONU\n");
	char str[50] = "Mustafa Kemal Ataturk";
	puts(str);
	memset(str, ')', 5); /*ÝLK 5 KARAKTERÝ DEÐÝÞTÝRDÝK,SET ETTÝK*/
	puts(str);
	printf("\n");

	/*MEMCPY FONKSIYONU*/
	printf("MEMCPY FONKSIYONU\n");
	char cpy[50] = "Mustafa Kemal Ataturk";
	char str2[50];
	memcpy(str2,cpy, strlen(cpy)+1 );
	puts(str2);
	printf("\n");

	/*MEMMOVE FONKSIYONU*/
	printf("MEMMOVE FONKSIYONU\n");
	char str3[50] = "Ataturk";
	memmove(str3+2,str3, strlen(str3)+1);
	puts(str3);
	printf("\n");

	/*MEMCHR FONKSIYONU*/
	printf("MEMCHR FONKSIYONU\n");
	char str4[50] = "Ataturk";
	char*ps=memchr(str4, 'k',50);
	if (ps) {
		printf("bulundu : %p \n",ps);
	}
	else {
		printf("bulunmadi\n");
	}


	/*MEMCMP FONKSIYONU*/
	printf("\nMEMCMP FONKSIYONU\n");
	char str5[50] = "Ataturk";
	char str6[50] = "AtatuRk";
	int result=memcmp(str5,str6,50);
	if (result) {
		printf("birinci buyuk\n");
	}
	else if (result==0) {
		printf("esit\n");
	}
	else {
		printf("ikinci buyuk\n");
	}
	printf("\n");


}
	
