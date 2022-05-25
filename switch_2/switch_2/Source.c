#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int x;
	printf("bir ay giriniz :");
	scanf("%d",&x);
	switch (x) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6: printf("kis");
		break;
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12: printf("Yaz");
	default:
		break;
	}

}