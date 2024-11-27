#include <stdio.h>

void increment(void); // 함수원형

int main(void) {
    // 자동 지역변수
    for (int count = 0; count < 3; count++)
        increment(); // 3번 함수호출
}

void increment(void) {
    static int sindex = 1; // 정적 지역변수
    auto int aindex = 1; // 자동 지역변수

    printf("정적 지역변수 sindex: %2d,\t", sindex++);
    printf("자동 지역변수 aindex: %2d\n", aindex++);
}