#include <stdio.h>

int main(void)
{
    float num01;
    double num02;

    printf("두 개의 실수를 입력하세요 : ");
    scanf("%f %lf", &num01, &num02);
    printf("입력하신 두 실수는 %f와 %f입니다.\n", num01, num02);
    return 0;
}