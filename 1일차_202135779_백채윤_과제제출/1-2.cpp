#include<stdio.h>

int main() {
	char op;
	int i, j;

	printf("������ �Է��Ͻÿ�(��: 2 + 5)\n");
	printf(">>");
	scanf_s("%d %c %d", &i, &op, 1, &j);

	switch (op) {

	case '+':
		printf("%d %c %d = %d", i, op, j, i + j);
		break;

	case '-':
		printf("%d %c %d = %d", i, op, j, i - j);
		break;

	case '*':
		printf("%d %c %d = %d", i, op, j, i * j);
		break;

	case '/':
		printf("%d %c %d = %d", i, op, j, i / j);
		break;
	
	default:
		printf("�������� �ʴ� ������ �Դϴ�.");
	}
}