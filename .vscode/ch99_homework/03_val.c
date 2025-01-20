#include <stdio.h>


double FtoC(double fVal) {
    double cVal = (5.0 * (fVal - 32.0)) / 9.0; 
    return cVal;
}

int main() {
    double fVal, cVal;

    printf("화씨 온도를 입력하세요: ");
    scanf("%lf", &fVal);

    
    cVal = FtoC(fVal);

    //
    printf("화씨온도: %.1lf, 섭씨온도: %.1lf\n", fVal, cVal);

    return 0;
}
