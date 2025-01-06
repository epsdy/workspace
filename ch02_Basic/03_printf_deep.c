#include <stdio.h>
// 지수표현법
//  - x10을 e로 표현
//  - 0.0000314 = 3.14e-5,

int main() {
    // printf + format
    // 182cm -> 1.82m
    printf("%.1lf\n", 1e6); // 100000.0
    printf("%.7lf\n", 3.14e-5); // 0.0000314
    printf("%le\n", 0.0000314); // 지수표현 바꿈

}