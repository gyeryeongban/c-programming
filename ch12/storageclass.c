#include <stdio.h>

void infunction(void);
void outfunction(void);

// 전역변수
int global  = 10;
// 정적 전역변수
static int sglobal = 20;

int main(void) {
    auto int x = 100; // main() 함수의 자동 지역변수

    printf("%d, %d, %d\n", global, sglobal, x);
    infunction(); outfunction();
    infunction(); outfunction();
    infunction(); outfunction();
    printf("%d, %d, %d\n", global, sglobal, x);

    return 0;
}

void infunction(void) {
    // infunction() 함수의 자동 지역변수
    auto int fa = 1;
    // infunction() 함수의 정적 지역변수
    static int fs;

    printf("\t%d, %d, %d, %d\n", ++global, ++sglobal, fa, ++fs);
}