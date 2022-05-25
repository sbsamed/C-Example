#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"ali.h"

//declarations:derleyiciye bir þey tanýtmak(isim,fonskiyon,dizi)
//
//-volatile:program dýþý kaynaklar tarafýndan deðiþtirilebilen bir deðiþken ise,derleyicinin optimizasyon yapmasýný istemediðimiz  bu deðiþkeni iþlemci yerine rame yazmamýzý saðlar.
// volatile interrup iþlemlerinde kullanýlýnýr.
////register keywordu deðiþkeni iþlemcinin registerýna yazmak için ricada bulunuyor:
//linkage(baðlantý kavramý):external linkage, internal linkage



int main() {
	volatile int flag = 0;
	auto int x = 30; //automatik ömürlü oldu da zaten öyleyi
	register int y = 25;
	/////////////////////////////////////////////////////////

	foo(); //dýþ baðlaný yaptýk. //iç baðlantý yapsaydýk kullanamazdýk.//normal fonskyýon ve kütüphane olþturduk
	foo();//fonskyýonun baþýna static getirdik ve iç baðlantý yapabýlýyoruz sadece internal linkage
	foo();//extern keywordunu  kullanýrsan dýþ baðlantýya açar
	//ama deðiþken için extern kullanýrsan fazladan yer ayýrmasýn

	printf("%d", x); // x deðiþkenini extern keyworduyla oluþturdugumuz için bu x'i dýþ baðlantýya açtýk ve bellekte harýcýyen býr daha bunun ýcýn yer ayrýlmadý.
}