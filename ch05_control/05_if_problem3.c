#include <stdio.h>

int main() {
    // 두 수를 입력받고 크기를 비교하는는 프로그램

    int num1, num2;
    printf("첫번째 수: ");
    scanf("%d", &num1);
    printf("두번째 수: ");
    scanf("%d", &num2); // alt 방향키 아래 이동하기 // 컨트롤 x 한줄지우기

    if(num1 > num2) {
        printf("%d 더 크다", num1);
    }else if(num1 < num2) {
        printf("%d 더 작다", num1);
    }else if(num1 == num2) {
        printf("%d 와 %d가 같다", num1, num2);
        
    }
    
}

