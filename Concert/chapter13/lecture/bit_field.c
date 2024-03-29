#include <stdio.h>

struct product {    // 비트 필드 구조체
    unsigned style: 3;
    unsigned size: 2;
    unsigned color: 1;
};

int main(void) {
    struct product p1;

    p1.style = 5;
    p1.size = 3;
    p1.color = 1;

    printf("style=%d, size=%d, color=%d\n", p1.style, p1.size, p1.color);
    printf("sizeof(p1)=%lu\n", sizeof(p1));
    printf("p1=%08x\n", p1);

    return 0;
}
