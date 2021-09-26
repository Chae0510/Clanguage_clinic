#include <stdio.h>

#define SIZE 7


void square(int *a, int size);
void msquare(int *a, int size);
int average(int* a, int size);

int main() {
    int num[] = { 1,2,3,4,5,6,7 };
    int sum = average(num, SIZE);

    printf("배열 원소의 값: ");
    square(num, SIZE);
    printf("배열 원소의 평균: %d\n", sum);
    average(num, SIZE);
    msquare(num, SIZE);
    printf("배열 원소의 제곱: ");
    square(num, SIZE);

    return 0;
}

int average(int *a, int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum / size;
}

void msquare(int *a, int size) {
    int i;
    for (i = 0; i < size; i++)
        a[i] = a[i] * a[i];
}

void square(int *a, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%3d ", a[i]);
    }

    printf("\n");
}

