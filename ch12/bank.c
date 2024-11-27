#include <stdio.h>

// 전역변수
int total = 10000;

// 입금 함수원형
void save(int);
// 출금 함수원형
void withdraw(int);

int main(void) {
    printf(" 입금액 출금액 총입금액 총출금액 잔고\n");
    printf("\n");
    printf("%46d\n", total);
    save(50000);
    withdraw(30000);
    save(60000);
    withdraw(20000);
    printf("\n");

    return 0;
}

// 입금액을 매개변수로 사용
void save(int money) {
    // 총입금액이 저장되는 정적 지역변수
    static int amount;
    total += money;
    amount += money;
    printf("%7d %17d %20d\n", money, amount, total);
}

// 출금액을 매개변수로 사용
void withdraw(int money) {
    // 총출금액이 저장되는 정적 지역변수
    static int amount;
    total -= money;
    amount += money;
    printf("%15d %20d %9d\n", money, amount, total);
}