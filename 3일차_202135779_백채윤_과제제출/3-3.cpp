#include <stdio.h>

int a = 10;
int b = 20;

void Swap(void);

int main() {
	printf("Swap 전의 a = %d, b = %d\n", a, b);
	Swap();
	printf("Swap 후의 a = %d, b = %d\n", a, b);

	return 0;
}

void Swap(void) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}