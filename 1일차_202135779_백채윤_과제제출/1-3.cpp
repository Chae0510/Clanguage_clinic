#include <stdio.h>

int main() {
	int sum, a, b;

	printf("원하는 두 주사위의 합을 입력하세요 :");
	scanf_s("%d", &sum);

	printf("--------------------\n");
	printf("주사위A      주사위B\n");
	printf("--------------------\n");

	for (a = 1; a < 7; a++) {
		for (b = 1;b < 7;b++) {
			if (a + b == sum) {
				printf("     %d       %d\n", a, b);
			}
		}
	}

	return 0;
}