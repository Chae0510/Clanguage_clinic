#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a = 1, b = 100, num, count = 0, result = 0;

	srand((unsigned)time(NULL));

	printf(">> 컴퓨터의 숨긴 수를 맞히는 게임입니다.\n\n");
	printf("========================================\n");

	num = 1 + rand() % 100;

	while (1) {
		if (result != num) {
			printf("%3d ~ %3d 중의 값입니다. 얼마일까요? ", a, b);
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
			printf("컴퓨터가 숨긴 %d를 %d 만에 맞혔습니다.\n", num, count);
			break;
		}
	}
	return 0;
}