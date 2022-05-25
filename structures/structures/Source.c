#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#pragma pack(1) // structerý oluþturuken düzenli oluþturmasý için kullanýyoruz//byte alligment yapýyor//bellkkte boþluk býrakmýyor 


//1-2.video
struct ComplexNumber
{
	double mx;
	double my;

}n1,n2; //n1 ve n2 nesneleri gibi düþün / bunlar global alanda tanýmlý

 struct ComplexNumber1
{
	double mx;
	double my;

}n11, n22;
 //2.video sonu
 
 //3.video
typedef struct student  öðrenci; // fonksýyon alanýnda nesne oluþturmak için yazým kolaylýgý olsun dýye
 struct student
 {
	 char name[10];
	 char surname[10];
	 int no;
	 int not[3];
 }ogr1 = {"samed","baskin",2020}, ogr2;

//6.video // FONKSIYONLAR VE YAPI TÜRLERÝ
 void video6(öðrenci ogr );
 void video6_pointer(öðrenci* ogr);

//8.video için nested of structor
 typedef struct family aile;
 struct family {
	 int agefather;
	 int agemoher;
	
 }a1;
 typedef struct married evli;
    struct married {
	 char husband_name[10];
	 char wife_nme[10];
	aile f2;
	 
 }m1;
	//10.video için
	typedef	struct Data
	{
		int abc : 3; // bellekte 3 bitlik yer ayrýldý.
		
	} Data;

 int main() 
{
 n1.mx = 20;
	n1.mx--;
	n1.my = 15;
	printf("%f\n", n1.mx);
	n2 = n1;
	printf("%f\n", n2.my);
	
//	n1 = n11;  //farklý yapý türleri oldugundan nesneler arasý atama yapamayýz
 //2.video sonu

//3.video -yapý nesnelerine ilk deðer verme
	printf("%s-%s-%d \n", ogr1.name, ogr1.surname, ogr1.no);
	strcpy(ogr2.name, ogr1.name); // sýnýf içindeki nesneye ait üye deðiþkenler arasý atamayý strýng old. için strmpy ile yaptýk
	printf("%s \n",ogr2.name);

	//global alan dýþýnda nesne oluþturma
	struct student ogr3 = { "samos","basici",2020 }; // anladýn bence
	öðrenci ogr4; //typedef bildirimi yaptik

	//4.video arrow operatörü  // "->";
	öðrenci ogr5;
	öðrenci* ps = &ogr5;
	ps->no = 75;
	printf("%d\n", ogr5.no);

	//6.video // FONKSIYONLAR VE YAPI TÜRLERÝ
	//void foo(struct student);

	öðrenci ogr6 = { "samed","baskin",2020,{40,70,90} };
	 video6(ogr6);
	 video6_pointer(&ogr6);
	 printf("%d\n", ogr6.no);

	//7.video array of stuctor
	 öðrenci ogr7[3] = { {"mervce" ,"kahraman",2021,{25,35,89}},{"mustafa","sentop",2019,{25,35,89}} }; //ogr7[0] ýn adý soyadý numarsý ve notu var
	 for (int i = 0; i < 2; i++) {
		 printf("\n name :%s last name: %s no:%d not : %d,%d,%d \n", ogr7[i].name, ogr7[i].surname, ogr7[i].no, ogr7[i].not[0], ogr7[i].not[1], ogr7[i].not[2]);
	 }

	//8.video nested of structor
	 m1.f2.agefather = 89;
	 printf("\n%d\n", m1.f2.agefather);

	 ////*/**///////////////*/
	 
	// 9.video iþlemcinin kelýme uzunlugu (instrucuion set)
	 //iþlemcinin bir defada iþleme sokabýldýgý tam sayý buyuklugu
	 // 64 bit iþlemci mesela yani bir iþlemcibir seferde 64 bitlik iþlm yapabýlýyor
	 // #pragma pack(1) anlatýldý yaný yerleþtirme yaparken aradaboþluk býrakýlmasý engelenýyor
	
	
	 
	 // 10.video//bit field member //
	 // bir deðiþkenýn bellek alanýna bitler þeklinde yerleþmesine bit field member denýr ve biz bir deðiþkenýn kaç bitlik yer kaplamasý gerektýgýný struct'larda ayarlayabýlýyoruz
	 Data data1;
	 data1.abc = 2;
	 printf("\n %d \n", data1.abc);
}
 void video6(öðrenci ogr) {
	 printf("\n%s-%s-%d- %d-\n", ogr.name,ogr.surname,ogr.no,ogr.not[1]);
 }
 void video6_pointer(öðrenci *ogr) {
	 printf("\n%s-%s-%d- %d-\n", ogr->name, ogr->surname, ogr->no, ogr->not[1]);
	 ogr->no = 2589; //call-byreferance
 }


