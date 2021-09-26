#include <stdio.h>
#define	STUDENT 7
#define N 10

int main()
{
    int paper[STUDENT][N] = { {1,3,2,3,4,2,3,1,3,2},{2,3,2,4,3,2,3,1,4,2},{4,2,2,3,4,2,3,1,4,2},{1,3,2,3,3,2,3,4,4,2},{1,3,2,3,4,2,3,3,4,2},{1,1,1,4,4,3,3,2,4,3},{1,3,2,3,4,2,3,1,4,2} };
	int answer[N]={ 1,3,2,3,4,2,3,1,4,2 };
    int score[STUDENT] = { 0 };
    int rank[STUDENT];
    int i, j;
    int sum;

    printf("***************************************************\n");
    printf(" 문항");
    for (i = 1; i <= N; i++) {
        printf("%2d  ", i);
    }
    printf(" 점수\n");
    printf("***************************************************\n");

    for (i = 0; i < STUDENT; i++) {
        sum = 0;
        printf("%2d번  ", i + 1);
        for (j = 0; j < N; j++) {
            if (paper[i][j] == answer[j]) {
                printf("O   ");
                sum++;
            }
            else {
                printf("X   "); 
            }
        }
        score[i] = sum;
        printf("%2d점\n", sum);
    }
    printf("***************************************************\n\n");
    printf("          *****************\n");
    printf("          번호  점수  석차\n");
    printf("          *****************\n");


    int order[N] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int temp, num, num2;
    char swap;
    for (i = 1; i < N; i++) {
        swap = 'N';
        for (j = 0; j < N - i; j++) {
            num = order[j];
            num2 = order[j + 1];
            if (score[num] < score[num2]) {
                temp = order[j];
                order[j] = order[j + 1];
                order[j + 1] = temp;
                swap = 'Y';
            }
        }
        if (swap == 'N') 
            break;
    }
    for (i = 0; i < STUDENT; i++) {
        rank[i] = 1;
        num = order[i];
        for (j = 0; j < STUDENT; j++) {
            if (score[num] < score[j]) {
                rank[i]++;
            }
        }
        num = order[i];
        printf("          %2d번  %2d점  %2d등\n", num + 1, score[num], rank[i]);
    }
    printf("          *****************\n");

    return 0;
}