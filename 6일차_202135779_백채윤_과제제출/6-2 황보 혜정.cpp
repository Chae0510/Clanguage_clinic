#include <stdio.h>
int main(void)
{
    char str[20];

    printf("이름을 입력하세요 :");
    gets_s(str);
    printf("%s \n", str);
    return 0;
}