#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    double fahrenheit, celsius;
    printf("변환할 섭씨온도를 입력하세요. >> ");
    scanf("%lf", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32.0;
    printf("\n입력된 %.2f도는 화씨온도로 %.2f도입니다.\n", celsius, fahrenheit);

    return 0;
}