#include <stdio.h>

//  1. 정수값 입력 받기! (ex) 412)
//  2. 
//  3. 출력: 4+1+2=7

int main() {
    int num ;
    int total = 0; // 덧셈을 할 변수

    printf("숫자: ");
    scanf("%d", &num);

    while (num > 0 ) { // num이 0보다 클때때까지만
        total += (num%10); // 10으로 나누는 나머지 값
        num = num / 10; //num을 10으로 나눔
    }
    printf("총합: %d", total); 
}