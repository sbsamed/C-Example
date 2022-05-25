#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void generic_print_array(const void* vp, int size, int type);

int main() {
	/*void pointers*/
	int x = 27;
	void *vptr =&x;///
	
	double y = 58;
	vptr = &y;//
	printf("%f\n", *(double*)vptr);

	/*example */

	int ia[10] = {0,1,2,3,4,5,6,7,8,9};
	generic_print_array(ia, 10, sizeof(int));
}

/*türden baðýmsýz dizi elemanlarýný yazdýran fonskyýon*/
void generic_print_array( void* vp, size_t size, size_t nbyte) {
	
	char* p = (char*)vp;
	for ( size_t i = 0; i < size;i++) {
		printf("%d ", *p);
		p += nbyte;
	}

	}
