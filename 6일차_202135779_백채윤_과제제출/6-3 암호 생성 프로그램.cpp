#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


int check(char* str, char* str_check);
void pwd(char* str_check);

int main() {
    char str[100];
    char str_check[3] = { 0, };
    do {
        pwd(str_check);
        printf("암호를 생성하시오 : ");
        scanf("%s", str);
    } while (check(str, str_check));
    printf("적정한 암호입니다. \n");
    return 0;
}

int check(char* str, char* str_check) {
    int i;
    for (i = 0; str[i]; i++) {
        if ('0' < str[i] && '9' > str[i]) {
            str_check[0] = 1;
        }
        else if ('a' < str[i] && 'z' > str[i]) {
            str_check[1] = 1;
        }
        else if ('A' < str[i] && 'Z' > str[i]) {
            str_check[2] = 1;
        }
    }
    for (i = 0; i < 3; i++) {
        if (str_check[i] != 1) {
            printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요! \n");
            return 1;
        }
    }
    return 0;
}
void pwd(char* str_check) {
    int i = 0;
    for (i = 0; i < 3; i++) {
        str_check[i] = 0;
    }
}