#include <stdio.h>

int main() {
	int sum, a, b;

	printf("���ϴ� �� �ֻ����� ���� �Է��ϼ��� :");
	scanf_s("%d", &sum);

	printf("--------------------\n");
	printf("�ֻ���A      �ֻ���B\n");
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