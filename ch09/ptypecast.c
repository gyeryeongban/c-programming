#include <stdio.h>

int main(void) {
    char c[4] = {'A', '\0', '\0', '\0'}; // 문자 'A' 코드값: 65
    // int *pi = &c[0]; // 경고 발생
    int *pi = (int *) &c[0];

    printf("%d %c\n", (int) c[0], c[0]);
    printf("%d %c\n", *pi, (char) *pi);

    return 0 ;
}