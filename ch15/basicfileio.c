#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // for exit()

int main() {
    FILE *f; // 파일 포인터

    // 파일 열기 함수 fopen()과 fopen_s()
    // if (fopen_s(&f, "myinfo.txt", "w") != 0)
    if ((f = fopen("myinfo.txt", "w")) == NULL) {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    };

    // 파일에 쓰려는 자료
    char tel[15] = "010-3018-9917";
    char add[30] = "서초구 대치로 332";
    int age = 22;
    // 파일 "basic.txt"에 쓰기
    fprintf(f, "전화번호: %s, 주소: %s, 나이: %d\n", tel, add, age);

    // 파일 닫기
    fclose(f);
    // 표준출력 콘솔에 쓰기
    printf("전화번호: %s, 주소: %s, 나이: %d\n", tel, add, age);
    puts("프로젝트 폴더에서 파일 myinfo.txt를 메모장으로 열어보세요.");

    return 0;
}