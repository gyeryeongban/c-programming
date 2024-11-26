#include <stdio.h>

int main(void) {
    char *java = "java";
    printf("%s", java);

    // 문자 포인터가 가리키는 문자 이후를 하나씩 출력
    int i = 0;
    while (java[i]) // while (java[i] != '\0')
        printf("%s", java[i++]);
    printf(" ");

    i = 0;
    while (*(java + i) != '\0') // java[i]는 *(java + i)와 같음
        printf("%c", *(java + i++));
    printf("\n");

    // 수정 불가능, 실행오류 발생
    java[0] = 'J';

    return 0;
}