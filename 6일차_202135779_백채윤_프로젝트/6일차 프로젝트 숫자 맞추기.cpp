#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a = 1, b = 100, num, count = 0, result = 0;

	srand((unsigned)time(NULL));

	printf(">> ��ǻ���� ���� ���� ������ �����Դϴ�.\n\n");
	printf("========================================\n");

	num = 1 + rand() % 100;

	while (1) {
		if (result != num) {
			printf("%3d ~ %3d ���� ���Դϴ�. ���ϱ��? ", a, b);
			scanf_s("%d", &result);

			if (num <= result) {
				b = result - 1;
			}
			if (num > result) {
				a = result + 1;
			}
			count++;
		}
		else {
			printf("========================================\n\n");
			printf("��ǻ�Ͱ� ���� %d�� %d ���� �������ϴ�.\n", num, count);
			break;
		}
	}
	return 0;
}