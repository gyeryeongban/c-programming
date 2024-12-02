#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    char fname[] = "grade.txt";
    FILE *f;
    char names[80];
    int cnt = 0;

    // if ((f = fopen(fname, "w")) == NULL)
    if (fopen_s(&f, fname, "w") != 0) {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    };
    printf("이름과 성적(중간, 기말)을 입력하세요.\n");
    fgets(names, 80, stdin);

    // 콘솔에 이름 중간 기말 입력하고 Enter 키
    // 여러 줄에 입력하다가
    // 종료하고 싶을 때 새 줄 첫 행에서 ctrl + Z 누름
    while (!feof(stdin))
    {
        // 파일 "grade.txt"에 쓰기
        fprintf(f, "%d ", ++cnt); // 맨 앞에 번호를 삽입
        fputs(names, f); // 이후에 입력받은 이름과 성적 2개 저장
        fgets(names, 80, stdin); // 다시 표준입력
    }
    fclose(f);

    return 0;
}