#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"ali.h"

//declarations:derleyiciye bir �ey tan�tmak(isim,fonskiyon,dizi)
//
//-volatile:program d��� kaynaklar taraf�ndan de�i�tirilebilen bir de�i�ken ise,derleyicinin optimizasyon yapmas�n� istemedi�imiz  bu de�i�keni i�lemci yerine rame yazmam�z� sa�lar.
// volatile interrup i�lemlerinde kullan�l�n�r.
////register keywordu de�i�keni i�lemcinin register�na yazmak i�in ricada bulunuyor:
//linkage(ba�lant� kavram�):external linkage, internal linkage



int main() {
	volatile int flag = 0;
	auto int x = 30; //automatik �m�rl� oldu da zaten �yleyi
	register int y = 25;
	/////////////////////////////////////////////////////////

	foo(); //d�� ba�lan� yapt�k. //i� ba�lant� yapsayd�k kullanamazd�k.//normal fonsky�on ve k�t�phane ol�turduk
	foo();//fonsky�onun ba��na static getirdik ve i� ba�lant� yapab�l�yoruz sadece internal linkage
	foo();//extern keywordunu  kullan�rsan d�� ba�lant�ya a�ar
	//ama de�i�ken i�in extern kullan�rsan fazladan yer ay�rmas�n

	printf("%d", x); // x de�i�kenini extern keyworduyla olu�turdugumuz i�in bu x'i d�� ba�lant�ya a�t�k ve bellekte har�c�yen b�r daha bunun �c�n yer ayr�lmad�.
}