#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f;
    // if ((f = fopen("test.bin", "wb+")) == NULL)
    if (fopen_s(&f, "test.bin", "wb+") != 0) {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    int out[] = {10, 20, 30, 40, 50, 60, 70, 80};
    //_putw() 이용 배열 out의 내용 모두 출력
    int size = sizeof(out) / sizeof(out[0]);
    printf("파일에 출력 자료: ");
    for (int i = 0; i < size; i++) {
        _putw(out[i], f);
        printf("%d ", out[i]);
    }
    printf("\n");

    // 파일 f의 파일 지시자를 0으로 위치
    rewind(f);
    printf("파일에서 입력 자료(하나씩 건너 뜀): ");
    for (int i = 0; i < size / 2; i++) {
        int in = _getw(f);
        fseek(f, sizeof(int), SEEK_CUR);
        printf("%d ", in);
    }
    printf("\n");
    fclose(f);

    return 0;
}