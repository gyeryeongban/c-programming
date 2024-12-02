#include <stdio.h>
#include <stdlib.h>
void myprintf(int *ary, int n);

int main(void) {
    int *ary = NULL;
    // 동적메모리 할당
    if ((ary = (int *)calloc(3, sizeof(int))) == NULL) {
        printf("메모리 할당이 문제가 있습니다.\n");
        exit(EXIT_FAILURE);
    }
    myprintf(ary, 3); // 모두 기본값인 0 출력

    // 동적메모리 해제
    free(ary);
    myprintf(ary, 3); // 모두 쓰레기값 출력

    return 0;
}

void myprintf(int *ary, int n) {
    for (int i = 0; i < n; i++)
        printf("ary[%d] = %d\n", i, *(ary + i));
}