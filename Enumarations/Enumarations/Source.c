#include<stdio.h>


int main() {
	/*ortak gruplar� numaraland�rmak i�in kullan�l�r*/
	enum Note{ hatal�,basarisiz,gecer,orta,iyi,pekiyi } kimya ; /*0-1-2-3-4-5 olarak kend� numarland�rd�*/
	enum Note mathnote;
	mathnote = pekiyi;
	printf("%d\n", mathnote);
	kimya = iyi;
	printf("%d\n", kimya);

	
	typedef enum y�n{kuzey,g�ney,do�u,bat�} y�n ;
	y�n y1=kuzey;
	switch (y1)
	{
	case 0:
		printf("kuzey\n");
		break;
	case 1:
		printf("g�ney\n");
		break;
	}


	/*example*/
}