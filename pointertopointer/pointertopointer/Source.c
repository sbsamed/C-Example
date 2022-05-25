#include<stdio.h>

int main() {
	int x = 25;
	int* p = &x;
	int ** ptr = &p;

	printf("%p\n", &x);
	printf("%p\n", p);
	printf("%p\n", *ptr);
}