#include <stdio.h>

int main() {
	int age = 0, i = 0;

	printf("���̸� �Է��Ͻÿ�: ");
	scanf_s("%d", &age);

	if (age <= 18) {
		printf("û�ҳ� ����Դϴ�");
	}
	else {
		if (age < 65) {
			printf("���ο���Դϴ�");
		}
		else {
			printf("��ο�� ����Դϴ�");
		}
	}
	return 0;
}