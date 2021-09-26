#include <stdio.h>
#include <math.h>

 float get_distance(double x1, double y1, double x2, double y2);
int main(void)
{
    float x1, y1, x2, y2;
    printf("첫 번째 점의 X, Y좌표를 입력하세요: ");
    scanf_s("%f %f", &x1, &y1);
    printf("두 번째 점의 X, Y좌표를 입력하세요: ");
    scanf_s("%f %f", &x2, &y2);
    printf("두점 사이의 거리는 %0.2f입니다.\n", get_distance(x1, y1, x2, y2));
    return 0;
}
float get_distance(double x1, double y1, double x2, double y2)
{
    float d;
    d = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
    return d;
}