#include <stdio.h>



int main(void) {
    char arr[15];
    char temp;
    int leng = 0;

    printf("���ڿ��� �Է��ϼ��� : ");
    gets_s(arr, sizeof(arr));
    //scanf_s("%s", arr, 15);

    while (arr[leng] != '\0')
        leng++;

    for (int i = 0; i < leng / 2; i++) {
        temp = arr[i];
        arr[i] = arr[leng - i - 1];
        arr[leng - i - 1] = temp;
    }
    
    printf("���ڿ��� ���̴� %d�Դϴ�.\n", leng);
    printf("����� ���� : %s\n", arr);
    return 0;
}