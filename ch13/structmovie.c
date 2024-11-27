#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    // 영화 정보 구조체
    typedef struct movie {
        char *title; // 영화제목
        int attendance; // 관객수
        char director[20]; // 감독
    } movie;

    movie box[] = {
        {"명량", 17613000, "김한민"},
        {"국제시장", 14257000, "윤제균"},
        {"베테랑", 13383000}
    };

    // 영화 베테랑의 감독을 류승완으로 저장
    strcpy(box[2].director, "류승완");

    printf(" 제목 감독 관객수\n");
    printf("===================\n");
    for (int i = 0; i < 3; i++)
        printf("[%8s] %6s %d\n", box[i].title, box[i].director, box[i].attendance);
    
    return 0;
}
