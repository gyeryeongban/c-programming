#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *f;

    if (argc != 2) {
        printf("사용법: list filename\n");
        exit(1);
    }

    // 읽기 모드로 파일 읽기
    // if ((f = fopen(argv[1], "r")) == NULL)
    if (fopen_s(&f, argv[1], "r") != 0) {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    // 문자를 저장할 ch, 행번호를 저장할 cnt
    int ch, cnt = 0;
    printf("%4d: ", ++cnt);
    while ((ch = fgetc(f)) != EOF) {
        putchar(ch); // putc(ch, stdout);
        // 행 처음에 행 번호 출력
        if (ch == '\n')
            printf("%4d: ", ++cnt);
    }
    printf("\n");
    fclose(f);

    return 0;
}