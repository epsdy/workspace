#include <stdio.h>
#include <string.h>

// BMI계산기
// 1. 입력부(신장, 몸무게)
// 2. 제어부(BMI 계산)
// 3. 출력부(BMI 결과 출력)

// BMI지수 공식
// - 몸무게(kg) / (신장(m) x 신장(m))
// BMI 범위
// 1. 18.5 미만 :  저체중
// 2. 18.5~23 미만 : 정상
// 3. 23~26 미만 : 과제중
// 4. 26~30 미만 : 비만
// 5. 30 이상 : 고도비만


int main() {
    // 1. 입력부(신장, 체중)
    int height; // 신장
    int weight; // 체중

    printf("신장(cm): ");
    scanf("%d", &height);
    printf("몸무게(kg): ");
    scanf("%d", &weight);
    
    // 데이터 전처리
    double height_m = (double)height / 100;

    // 2. 제어부
    // 2-1. BMI 지수 계산
    double bmiValue = weight / (height_m * height_m);
    //printf("%.2lf", bmiValue);
    // 2-2. BMI 등급 책정
    char bmiClass[20];
    if(bmiValue > weight) {
        strcpy(bmiClass, "저체중");
        
    }else if(bmiValue >= 18.5 && bmiValue < 23){
        strcpy(bmiClass, "정상");
    }else if(bmiValue >= 23 && bmiValue < 36){
        strcpy(bmiClass, "과체중");
    }else if(bmiValue >= 26 && bmiValue < 30){
        strcpy(bmiClass, "비만");
    }else if(bmiValue >= 30){
        strcpy(bmiClass, "고도비만");
    }

    // 3. 출력부
    printf("당신의 신장 %dcm, 몸무게 %dkg로", height, weight);
    printf("BMI 지수는 %.2lf로 %s입니다.", bmiValue, bmiClass);
}