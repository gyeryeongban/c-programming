#include <stdio.h>

int main(void) {
    // 영화 정보 구조체
    typedef struct movie {
        char *title; // 영화제목
        int attendance; // 관객수
    } movie;

    movie assassination;

    assassination.title = "암살";
    assassination.attendance = 12700000;

    printf("[%s] 관객수: %d\n", assassination.title, assassination.attendance);

    return 0;
}