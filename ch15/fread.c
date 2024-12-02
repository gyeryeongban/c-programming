#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct personscore
{
    int number;
    char name[40];
    int mid;
    int final;
    int quiz;
};
typedef struct personscore pscore;
void printhead();

int main() {
    char fname[] = "score.bin";
    FILE *f;

    // if (fopen_s(&f, fname, "rb") != 0)
    if ((f = fopen(fname, "rb")) == NULL) {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    };
    printhead();

    // 이진모드로 파일 f에서 구조체 pscore 자료 읽기
    pscore score;
    fread(&score, sizeof(pscore), 1, f);
    while (!feof(f))
    {
        // 표준출력에 쓰기
        fprintf(stdout, "%6d%18s%8d%8d%8d\n", score.number, score.name, score.mid, score.final, score.quiz);
        fread(&score, sizeof(pscore), 1, f);
    }

    printf("%s\n", "");
    fclose(f);

    return 0;
}

void printhead() {
    printf("%s\n", "");
    printf("%8s%15s%10s%8s%8s\n", "번호", "이름", "중간", "기말", "퀴즈");
    printf("%s\n", "");
}