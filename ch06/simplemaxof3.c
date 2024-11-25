#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    enum color {RED, GREEN, BLUE};
    int input;

    printf("세 정수(R[0], G[1], B[2]) 중의 하나를 입력: ");
    scanf("%d", &input);

    switch (input)
    {
    case 0:
        printf("Red\n");
        break;
    
    case 1:
        printf("Green\n");
        break;

    case 2:
        printf("Blue\n");
        break;
    
    default:
        printf("잘못된 입력\n");
    }

    return 0;
}