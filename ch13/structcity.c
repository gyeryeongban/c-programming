#include <stdio.h>
#include <string.h>

// 지구 위치 구조체
struct position {
    double latitude; // 위도
    double longitude; // 경도
};

int main(void) {
    // 도시 정보 구조체
    struct city {
        char *name; // 이름
        struct position place; // 위치
    };
    struct city seoul, newyork;

    seoul.name = "서울";
    seoul.place.latitude = 37.33;
    seoul.place.latitude = 126.58;

    newyork.name = "뉴욕";
    newyork.place.latitude = 40.8;
    newyork.place.latitude = 73.9;

    printf("[%s] 위도 = %.1f 경도 = %.1f\n", seoul.name, seoul.place.longitude, seoul.place.latitude);
    printf("[%s] 위도 = %.1f 경도 = %.1f\n", newyork.name, newyork.place.longitude, newyork.place.latitude);

    return 0;
}