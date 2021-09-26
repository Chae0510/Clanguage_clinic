#include <stdio.h>



int main(void) {
    char arr[15];
    char temp;
    int leng = 0;

    printf("문자열을 입력하세요 : ");
    gets_s(arr, sizeof(arr));
    //scanf_s("%s", arr, 15);

    while (arr[leng] != '\0')
        leng++;

    for (int i = 0; i < leng / 2; i++) {
        temp = arr[i];
        arr[i] = arr[leng - i - 1];
        arr[leng - i - 1] = temp;
    }
    
    printf("문자열의 길이는 %d입니다.\n", leng);
    printf("변경된 문자 : %s\n", arr);
    return 0;
}