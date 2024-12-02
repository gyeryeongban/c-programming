#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char fname[] = "char.txt"; // 입력한 내용이 저장될 파일이름
    FILE *f; // 파일 포인터

    // 쓰기모드로 파일 열기
    // if ((f = fopen(fname, "w")) == NULL)
    if (fopen_s(&f, fname, "w") != 0) {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    };
    puts("문자를 입력하다가 종료하려면 x를 입력 >>");

    // 표준입력으로 받은 문자를 파일에 출력하는 부분
    int ch; // 입력된 문자 저장
    while ((ch = _getche()) != 'x')
        // 파일 "char.txt"에 쓰기
        fputc(ch, f); // 파일에 문자 출력
    fclose(f);
    puts("");

    // 읽기모드로 파일 열기
    if (fopen_s(&f, fname, "r") != 0) {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    };

    // 파일에서 다시 문자를 입력받아 콘솔에 표준출력하는 부분
    while ((ch = fgetc(f)) != EOF)
        // 파일 "char.txt"에서 다시 문자 읽기
        _putch(ch); // 파일로부터 입력 받은 문자를 표준출력
    fclose(f);
    puts("");

    return 0;
}