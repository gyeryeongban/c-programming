#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char dest[80] = "Java";
    char source[80] = "C is a language";

    printf("%s\n", strcpy(dest, source));
    // printf("%d\n", strcpy_s(dest, 80, source));
    // printf("%s\n", dest);
    printf("%s\n", strncpy(dest, "C#", 2));

    printf("%s\n", strncpy(dest, "C#", 3));
    // printf("%d\n", strncpy_s(dest, 80, "C#", 3));
    // printf("%s\n", dest);

    return 0;
}