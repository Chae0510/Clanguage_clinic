#include<stdio.h>

int main() {
	int i, num;

	do {
	MENU:

		printf("*******메뉴*******\n\n");
		printf("1.라떼\n\n");
		printf("2.우유\n\n");
		printf("3.종료\n\n");
		printf("****************\n");
		printf("\n메뉴를 선택하세요 : ");
		scanf_s("%d", &num);

		switch (num) {
		case 1:
			printf("\n라떼를 선택했습니다.\n\n");
			break;

		case 2:
			printf("\n우유를 선택했습니다.\n\n");
			break;

		case 3:
			printf("\n메뉴 프로그램을 종료합니다.\n\n");
			continue;

		default:
			goto MENU;

		}
	} 	while (num != 3);
}