#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char s[100];
    // 문자배열 s에 표준입력한 한 행을 저장
    gets(s);

    // 문자배열에 저장된 한 행을 출력
    char *p = s;
    while (*p)
        printf("%c", *p++);
    printf("\n");

    return 0;
}