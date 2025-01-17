/**
 * 구조체 사용 방법
 *  1. 구조체 정의
 *      -> 정의한 구조체를 컴파일러가 인식
 *  ex) struct student {
 *        int num;
 *        double grade;
 *     }
 *  2. 구조체 변수 선언
 *      -> 저장 공간 할당
 *      -> 각 멤버의 공간이 메모리에 연속으로 할당
 *      -> 구조체 변수의 크기는 각 멤버의 크기를 더한 값
 *  ex) struct student s1;
 *  ex) int + double -> 4Byte + 8Byte = 구조체 변수 크기(12Byte)
 *  3. 구조체 변수 사용
 *      -> main() 함수 앞에 위치하면 전역으로 사용
 *      -> 함수 내에 선언하면 로컬로 사용
 *  ex) s1.num; or s1.grade;
 * 
 * 구조체 변수의 크기
 *  - 모든 시스템은 데이터를 빠르게 읽고 쓰기 위해 일정한 크기 단위(블록)로 메모리 접근
 *  - 컴파일러는 구조체 멤버의 크기가 들쑥날쑥한 경우
 *    멤버 사이에 패딩 바이트(Padding Byte)를 사용해서 정렬 -> 바이트 얼라이먼트(Byte alignment)
 *  - 바이트 얼라이먼트는 멤버 중 크기가 가장 큰 자료형을 기준으로 할당
 *  - 따라서, 구조체의 요소와 선언 순서에 따라 필요한 메모리 공간이 다름(패딩바이트 때문)
 * ex) int, int, double
 *      8Byte 블록 -> int(4Byte) + int(4Byte) 
 *      8Byte 블록 -> double(8Byte) 
 *      8Byte 블록 -> int(4Byte) + padding(4Byte)
 *   ※  padding Byte(8) 만큼 메모리 낭비 
 */


#include <stdio.h>

struct student {        // 구조체 선언
    int num;            // - num 멤버변수 선언
    double grade;       // - grade 멤버변수 선언
};                       // - 세미콜론(;) 사용



int main() {
    struct  student s1; // 2. 구조체 변수 선언
    
    // 3. 구조체 변수 사용
    s1.num = 2;
    s1.grade = 4.2;
    printf("학번: %d\n", s1.num);
    printf("학점: %.1lf\n", s1.grade);
}
