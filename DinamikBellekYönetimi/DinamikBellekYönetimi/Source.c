#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main() {

	/*malloc fonks�yonu */
	int *ptr=(int*)malloc(4);  //4 byte istedik, geri d�n��� adres oldugu i�in pointera aktard�k gelen adresi
	
	if (ptr == NULL) {
		printf("bellek yetersiz\n");
		exit(EXIT_FAILURE);

	}
	printf("basarili\n");
	
	printf("%d\n",*ptr); /*garbage value*/
	*ptr = 20;
	printf("%p = %d\n", ptr,*ptr);
	*(ptr + 1) = 25;
	printf("%p = %d\n", (ptr+1), *(ptr+1));
	
	/*free fonksiyonu*/
	
	free(ptr);/*ald�g�m�z bellek blogunu geeri iade ettik*/
	*ptr = 25; /*tan�ms�z*/
	  
	/*calloc fonks�yonu*/
	int* ptr2 = (int*)calloc(1,4); /*1 tane 4 bytel�k b�r alan istedik*/
	free(ptr2);
	/*malloctn fark� bo� de�erlere garbage value yer�ne 0 atamas�d�r*/



	/*EXaMPLE*/
	
}

