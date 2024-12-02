#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *pi = NULL;
    // 메모리 할당 함수 malloc()으로 동적메모리 할당
    pi = (int *)malloc(sizeof(int));
    // 동적메모리 할당 성공 검사
    if (pi == NULL) {
        printf("메모리 할당에 문제가 있습니다.");
        exit(1);
    };
    // 내용 값 저장
    *pi = 3;
    printf("주소값: *pi = %d, 저장값: p = %d\n", pi, *pi);

    // 메모리 해제
    free(pi);

    return 0;
}