#include <stdio.h>
#define version 55
int main() {
#if version<10
	printf("versiyon=%d", version);
#else 
	printf("versiyon 10 dan buyuktur.");
#endif

}