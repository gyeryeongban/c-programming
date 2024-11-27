#include <stdio.h>

void process();

int main() {
    process();
    process();
    process();

    return 0;
}

void process() {
    // 정적 변수
    static int sx;
    // 지역 변수
    int x = 1;

    printf("%d %d\n", x, sx);

    x += 3;
    sx += x + 3;
}