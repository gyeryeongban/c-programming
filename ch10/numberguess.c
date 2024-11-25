#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h> // rand(), srand()를 위한 헤더파일 포함
#include <time.h> // time()을 위한 헤더파일 포함

#define MAX 100

int main(void) {
    int guess, input;

    srand((long)time(NULL));
    guess = rand() % MAX + 1;

    printf("1에서 %d 사이에서 한 정수가 결정되었습니다.\n", MAX);
    printf("이 정수는 무엇일까요? 입력해 보세요. : ");

    while (scanf("%d", &input)) {
        if (input > guess)
            printf("입력한 수보다 작습니다. 다시 입력하세요. : ");
        else if (input < guess)
            printf("입력한 수보다 큽니다. 다시 입력하세요. : ");
        else {
            puts("정답입니다.");
            break;
        }
    }

    return 0;
}