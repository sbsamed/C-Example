#include<stdio.h>
void swap(int x, int y) {
	int p = x;
	x = y;
	y = p;
	printf("a=%d\nb=%d", x, y);
}



int main() {
	int a = 20, b = 40;
	swap(a,b);
	
	
	


	
}
