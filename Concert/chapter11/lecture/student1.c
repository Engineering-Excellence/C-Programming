#include <stdio.h>
#include <string.h>

struct student {    // 구조체 정의
    int number;
    char name[10];
    double grade;
};

int main(void) {
    struct student s;   // 구조체 변수 선언

    // 구조체 멤버 참조
    s.number = 20070001;
    strcpy(s.name, "홍길동");
    s.grade = 4.3;

    printf("학번: %d\n", s.number);
    printf("이름: %s\n", s.name);
    printf("학점: %.2f\n", s.grade);

    return 0;
}
