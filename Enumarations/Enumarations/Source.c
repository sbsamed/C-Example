#include<stdio.h>


int main() {
	/*ortak gruplarý numaralandýrmak için kullanýlýr*/
	enum Note{ hatalý,basarisiz,gecer,orta,iyi,pekiyi } kimya ; /*0-1-2-3-4-5 olarak kendý numarlandýrdý*/
	enum Note mathnote;
	mathnote = pekiyi;
	printf("%d\n", mathnote);
	kimya = iyi;
	printf("%d\n", kimya);

	
	typedef enum yön{kuzey,güney,doðu,batý} yön ;
	yön y1=kuzey;
	switch (y1)
	{
	case 0:
		printf("kuzey\n");
		break;
	case 1:
		printf("güney\n");
		break;
	}


	/*example*/
}