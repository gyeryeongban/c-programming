#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 레지스터 지역변수 선언
    register int sum = 0;

    // 메모리에 저장되는 일반 지역변수 선언
    int max;
    printf("양의 정수 입력 >> ");
    scanf("%d", &max);

    // 레지스터 블록 지역변수 선언
    for (register int count = 1; count <= max; count++)
        sum += count;

    printf("합: %d\n", sum);

    return 0;
}