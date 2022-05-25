#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <ctype.h>
int bp(int x)
{
	int i, k[30];
	i = 0;
	while (x >= 1)
	{
		i++;
		k[i] = x % 2;
		x = x / 2;
	}
	for (i = i; i > 0; i--)
		printf("%d", k[i]);
	printf("\n");
}
void swap(int* i, int* j) {
	int temp = *i;
	*i = *j;
	*j = temp;
}
int* square(int* i) {
	*i *= *i;
	return i;
}




int main() {
	int x = 5;
	int y = 285;
/*	int* p = &x;
	int* p1 = &y;
	 printf("%p\n", p);
	printf("%p\n", &x);
	printf("%d", *p); */
	
	/*swap(&x, &y);
	printf("%d, %d", x, y);*/

	
	
	
	int *p3=square(&x);
	printf("%d\n", *p3);
	printf("%p--%p", &x,&p3);
	
	
	
	
	


}



