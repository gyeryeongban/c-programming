#include <stdio.h>

// 구조체 자료형 student 정의
typedef struct student
{
    char dept[40]; // 학과
    char name[20]; // 이름
    int snum; // 학번
} student;

int main() {
    student mylab[] = {
        {"컴퓨터공학과", "김하늘", 20200000},
        {"컴퓨터공학과", "백규정", 20210000},
        {"컴퓨터소프트웨어공학과", "김효주", 20220000}
    };

    FILE *f;
    char fname[] = "student.bin";
    fopen_s(&f, fname, "wb");
    int size = sizeof(mylab) / sizeof(student);
    fwrite(mylab, sizeof(student), size, f);
    fclose(f);

    // 다시 읽기 위해 오픈
    fopen_s(&f, fname, "rb");
    // 파일에서 구조체 배열 모두를 한번에 읽어 다시 저장된 배열을 출력
    student lab[10]; // 다시 파일의 내용을 저장할 배열 선언
    // 파일 f에서 sizeof(student) 크기로 size 수만큼 읽어 lab에 저장
    fread(lab, sizeof(student), size, f);
    for (int i = 0; i < size; i++)
        fprintf(stdout, "%24s%10s%12d\n", lab[i].dept, lab[i].name, lab[i].snum);
    fclose(f);

    return 0;
}