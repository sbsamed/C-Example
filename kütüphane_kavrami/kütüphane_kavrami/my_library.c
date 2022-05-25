#include"my_library.h"
int maxofTwo(int n1, int n2){
	if (n1 > n2)
		return n1;
			return n2;
}
int factorial(int num) {
	int fact = 1;
	while (num > 1) {
		fact*=num;
		num--;
	}
	return fact;
}
