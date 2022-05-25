#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main() {

	/*malloc fonksýyonu */
	int *ptr=(int*)malloc(4);  //4 byte istedik, geri dönüþü adres oldugu için pointera aktardýk gelen adresi
	
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
	
	free(ptr);/*aldýgýmýz bellek blogunu geeri iade ettik*/
	*ptr = 25; /*tanýmsýz*/
	  
	/*calloc fonksýyonu*/
	int* ptr2 = (int*)calloc(1,4); /*1 tane 4 bytelýk býr alan istedik*/
	free(ptr2);
	/*malloctn farký boþ deðerlere garbage value yerýne 0 atamasýdýr*/



	/*EXaMPLE*/
	
}

