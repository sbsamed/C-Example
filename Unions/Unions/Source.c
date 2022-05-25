#include<stdio.h>
#pragma pack(1)


typedef union Ports
{
	int interPort;
	int timerPort;
	int adcPort;
	double spi;
}Ports; 


int main() {
	
	Ports picA;
	Ports *uptr = &picA;
	uptr->adcPort = 3;
	
	Ports arm7;
	
	printf("sizeof= %zu\n", sizeof(Ports));/*sizeof tan�mlanan  en buyuk de�i�ken�n boyutuna e�it*/
	printf("%p\n", &arm7.interPort);/*bellekte hepsi ayn� yere yerle�ir fakat sadece bir tanesini kullanab�l�r�z*/
	printf("%p\n", &arm7.timerPort);
	printf("%p\n", &arm7.adcPort);
	
	printf("/***********/\n");
	
	Ports atmel = { .spi =8.5 };/*sadece bir de�i�ken� kullanab�l�rz�n �rne�i*/
	printf("%d\n", atmel.interPort);
	printf("%d\n", atmel.timerPort);
	printf("%d\n", atmel.adcPort);
	printf("%f\n", atmel.spi);  
	

}