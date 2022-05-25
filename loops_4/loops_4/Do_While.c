#include <stdio.h>
#include<limits.h>

int main() {
	int sayi,flag=0;
	printf("sayi giriniz :");
	scanf("%d", &sayi);
	
	for (int i = (sayi - 1); i > 1; i--) {
		if (sayi % i == 0) {
			flag = 1;
			break;
		}
	}
	if (!flag)
		printf("asal sayidir");
	else 
		printf("asal sayi Degildir");
		
	

}