#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#pragma pack(1) // structer� olu�turuken d�zenli olu�turmas� i�in kullan�yoruz//byte alligment yap�yor//bellkkte bo�luk b�rakm�yor 


//1-2.video
struct ComplexNumber
{
	double mx;
	double my;

}n1,n2; //n1 ve n2 nesneleri gibi d���n / bunlar global alanda tan�ml�

 struct ComplexNumber1
{
	double mx;
	double my;

}n11, n22;
 //2.video sonu
 
 //3.video
typedef struct student  ��renci; // fonks�yon alan�nda nesne olu�turmak i�in yaz�m kolayl�g� olsun d�ye
 struct student
 {
	 char name[10];
	 char surname[10];
	 int no;
	 int not[3];
 }ogr1 = {"samed","baskin",2020}, ogr2;

//6.video // FONKSIYONLAR VE YAPI T�RLER�
 void video6(��renci ogr );
 void video6_pointer(��renci* ogr);

//8.video i�in nested of structor
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
	//10.video i�in
	typedef	struct Data
	{
		int abc : 3; // bellekte 3 bitlik yer ayr�ld�.
		
	} Data;

 int main() 
{
 n1.mx = 20;
	n1.mx--;
	n1.my = 15;
	printf("%f\n", n1.mx);
	n2 = n1;
	printf("%f\n", n2.my);
	
//	n1 = n11;  //farkl� yap� t�rleri oldugundan nesneler aras� atama yapamay�z
 //2.video sonu

//3.video -yap� nesnelerine ilk de�er verme
	printf("%s-%s-%d \n", ogr1.name, ogr1.surname, ogr1.no);
	strcpy(ogr2.name, ogr1.name); // s�n�f i�indeki nesneye ait �ye de�i�kenler aras� atamay� str�ng old. i�in strmpy ile yapt�k
	printf("%s \n",ogr2.name);

	//global alan d���nda nesne olu�turma
	struct student ogr3 = { "samos","basici",2020 }; // anlad�n bence
	��renci ogr4; //typedef bildirimi yaptik

	//4.video arrow operat�r�  // "->";
	��renci ogr5;
	��renci* ps = &ogr5;
	ps->no = 75;
	printf("%d\n", ogr5.no);

	//6.video // FONKSIYONLAR VE YAPI T�RLER�
	//void foo(struct student);

	��renci ogr6 = { "samed","baskin",2020,{40,70,90} };
	 video6(ogr6);
	 video6_pointer(&ogr6);
	 printf("%d\n", ogr6.no);

	//7.video array of stuctor
	 ��renci ogr7[3] = { {"mervce" ,"kahraman",2021,{25,35,89}},{"mustafa","sentop",2019,{25,35,89}} }; //ogr7[0] �n ad� soyad� numars� ve notu var
	 for (int i = 0; i < 2; i++) {
		 printf("\n name :%s last name: %s no:%d not : %d,%d,%d \n", ogr7[i].name, ogr7[i].surname, ogr7[i].no, ogr7[i].not[0], ogr7[i].not[1], ogr7[i].not[2]);
	 }

	//8.video nested of structor
	 m1.f2.agefather = 89;
	 printf("\n%d\n", m1.f2.agefather);

	 ////*/**///////////////*/
	 
	// 9.video i�lemcinin kel�me uzunlugu (instrucuion set)
	 //i�lemcinin bir defada i�leme sokab�ld�g� tam say� buyuklugu
	 // 64 bit i�lemci mesela yani bir i�lemcibir seferde 64 bitlik i�lm yapab�l�yor
	 // #pragma pack(1) anlat�ld� yan� yerle�tirme yaparken aradabo�luk b�rak�lmas� engelen�yor
	
	
	 
	 // 10.video//bit field member //
	 // bir de�i�ken�n bellek alan�na bitler �eklinde yerle�mesine bit field member den�r ve biz bir de�i�ken�n ka� bitlik yer kaplamas� gerekt�g�n� struct'larda ayarlayab�l�yoruz
	 Data data1;
	 data1.abc = 2;
	 printf("\n %d \n", data1.abc);
}
 void video6(��renci ogr) {
	 printf("\n%s-%s-%d- %d-\n", ogr.name,ogr.surname,ogr.no,ogr.not[1]);
 }
 void video6_pointer(��renci *ogr) {
	 printf("\n%s-%s-%d- %d-\n", ogr->name, ogr->surname, ogr->no, ogr->not[1]);
	 ogr->no = 2589; //call-byreferance
 }


