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
	
	printf("sizeof= %zu\n", sizeof(Ports));/*sizeof tanýmlanan  en buyuk deðiþkenýn boyutuna eþit*/
	printf("%p\n", &arm7.interPort);/*bellekte hepsi ayný yere yerleþir fakat sadece bir tanesini kullanabýlýrýz*/
	printf("%p\n", &arm7.timerPort);
	printf("%p\n", &arm7.adcPort);
	
	printf("/***********/\n");
	
	Ports atmel = { .spi =8.5 };/*sadece bir deðiþkený kullanabýlýrzýn örneði*/
	printf("%d\n", atmel.interPort);
	printf("%d\n", atmel.timerPort);
	printf("%d\n", atmel.adcPort);
	printf("%f\n", atmel.spi);  
	

}