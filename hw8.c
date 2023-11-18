#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// ǥ������ �Լ�����
double SD(double* data);

// ǥ������ �Լ�
double SD(double* data) {
    double sum = 0.0, mean, standardDeviation = 0.0;
    int i;

    // ��� ���
    for (i = 0; i < 5; ++i) {
        sum += *(data + i);
    }

    mean = sum / 5;

    // ǥ������ ���
    for (i = 0; i < 5; ++i)
        standardDeviation += pow(*(data + i) - mean, 2);

    return sqrt(standardDeviation / 5);
}

int main() {
    int i;
    double data[5];

    printf("Enter 5 real numbers: ");

    // �Ǽ� �Է�
    for (i = 0; i < 5; ++i)
        scanf("%lf", &data[i]);

    // ǥ������ ��갪 ���
    printf("Standard Deviation = %.3f", SD(data));

    return 0;
}

