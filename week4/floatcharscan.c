#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    float pi;
    printf("원주율을 입력하세요.\n");
    scanf("%f", &pi);
    printf("%f\n", pi);

    char ch1, ch2;
    printf("구분자를 공백으로 두 문자를 입력하세요.\n");

    scanf(" %c %c", &ch1, &ch2);
    printf("ch1=%c ch2=%c\n", ch1, ch2);

    return 0;
}