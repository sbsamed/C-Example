#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//1-atoi fonskyionu alphetic to integer;
//int atoi(const char*);
//2-itoa fonksiyonu integer to alphetic
///char *itoa(const int value,char*str,int base); //possix fonsksýyon yani linux da standart windowsta deðil
//3-sscanf ve sprintf(outputa yazmak yerýne belleðe göndercek) fonksýonlarý //
int main() {
	//atoi
	char s1[20] = "34KLM87";
	int value=atoi(s1);
	printf("%d\n", value);
	int value2 = atoi(s1 + 5);
	printf("%d\n", value2);

	//itoi
	int ival = 185;
	char str[25];
	_itoa(ival, str, 2);
	printf("%s\n", str);

	//sprint
	char s[20];
	int c= 25;
	double d = 12.25;
	sprintf(s, "%d%f", c, d); // c ve d deðiþkenlerýný char türden s dizisine yazdýrdýk;
	puts(s);
}