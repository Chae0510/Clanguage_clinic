#include<stdio.h>

int main() {
	int i, num;

	do {
	MENU:

		printf("*******�޴�*******\n\n");
		printf("1.��\n\n");
		printf("2.����\n\n");
		printf("3.����\n\n");
		printf("****************\n");
		printf("\n�޴��� �����ϼ��� : ");
		scanf_s("%d", &num);

		switch (num) {
		case 1:
			printf("\n�󶼸� �����߽��ϴ�.\n\n");
			break;

		case 2:
			printf("\n������ �����߽��ϴ�.\n\n");
			break;

		case 3:
			printf("\n�޴� ���α׷��� �����մϴ�.\n\n");
			continue;

		default:
			goto MENU;

		}
	} 	while (num != 3);
}