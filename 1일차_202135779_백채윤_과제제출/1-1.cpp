#include <stdio.h>

int main() {
	int age = 0, i = 0;

	printf("나이를 입력하시오: ");
	scanf_s("%d", &age);

	if (age <= 18) {
		printf("청소년 요금입니다");
	}
	else {
		if (age < 65) {
			printf("성인요금입니다");
		}
		else {
			printf("경로우대 요금입니다");
		}
	}
	return 0;
}