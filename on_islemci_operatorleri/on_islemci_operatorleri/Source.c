#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//stringizing operator

#define str(s) #s							//operand� olan ifadeyi �ift t�rnak i�erisine al�yor
#define str1(s1,s2)  printf(#s1" "#s2);    // #s ile str(s)'nin i�erisine string alabiiyoruz


//token-pasting operator

#define concat(x,y) x##y					// x ve y 'yi birle�tiriyor 

int main() {
	
											//stringizing operator
	printf("%s\n",str(samed));
	printf("%s\n", str(123.4));

	str1(istanbul,ankara);
	
										//token-pasting operator
	int samed = 21;
	printf("\n%d\n", concat(sam, ed));
}