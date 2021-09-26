#include<stdio.h>

int main() {
	int arr[5], i;
	float  sum = 0;

	printf("[결과]\n");
	printf("소프트웨어 교과의 점수를 입력하세요. (5명)\n");
	printf("===========================================\n");
	for (i = 0;i < 5;i++) {
		printf("[%d]번: ", i + 1);
		scanf_s("%d", &arr[i]); 
		sum += arr[i];
	}
	printf("\n소프트웨어 교과의 평균점수: %0.6f.\n", sum / 5); 
}