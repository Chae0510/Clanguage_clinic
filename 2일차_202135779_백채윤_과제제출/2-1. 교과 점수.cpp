#include<stdio.h>

int main() {
	int arr[5], i;
	float  sum = 0;

	printf("[���]\n");
	printf("����Ʈ���� ������ ������ �Է��ϼ���. (5��)\n");
	printf("===========================================\n");
	for (i = 0;i < 5;i++) {
		printf("[%d]��: ", i + 1);
		scanf_s("%d", &arr[i]); 
		sum += arr[i];
	}
	printf("\n����Ʈ���� ������ �������: %0.6f.\n", sum / 5); 
}