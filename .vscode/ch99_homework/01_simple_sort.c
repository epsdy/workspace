#include <stdio.h>

// 3개의 수를 입력받고, 큰 숫자로 정렬해서 출력하는 프로그램램

int main() {
    int num1 = 20, num2 = 10, num3 = 50; // 50 num1 , 20 num2, 10 num3
    int tmp = 0;
    scanf("%d", &num1, &num2, &num3);
      else{
     (num2 >= num1 && num2 >= num3) {		
		tmp = num1;
		num1 = num2;
		num2 = tmp;
     }
	}
	else if (num3 >= num1 && num3 >= num2) {	
		tmp = num1;
		num1 = num3;
		num3 = tmp;
	}

	if (num3 > num2) {
		tmp = num2;
		num2 = num3;
		num3 = num2;
	}

    printf("%d > %d >%d", num1, num2, num3); // 20> 10 > 50
    return 0;
}