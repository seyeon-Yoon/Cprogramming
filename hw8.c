#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 표준편차 함수선언
double SD(double* data);

// 표준편차 함수
double SD(double* data) {
    double sum = 0.0, mean, standardDeviation = 0.0;
    int i;

    // 평균 계산
    for (i = 0; i < 5; ++i) {
        sum += *(data + i);
    }

    mean = sum / 5;

    // 표준편차 계산
    for (i = 0; i < 5; ++i)
        standardDeviation += pow(*(data + i) - mean, 2);

    return sqrt(standardDeviation / 5);
}

int main() {
    int i;
    double data[5];

    printf("Enter 5 real numbers: ");

    // 실수 입력
    for (i = 0; i < 5; ++i)
        scanf("%lf", &data[i]);

    // 표준편차 계산값 출력
    printf("Standard Deviation = %.3f", SD(data));

    return 0;
}

