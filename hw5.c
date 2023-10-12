#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void bin(int n); 

void bin(int n) //2진수로 바꿔주는 재귀함수
{
    if (n == 0 || n == 1) //0이나 1이면 2진수에서도 0이나 1이므로 그대로 출력.
    {
        printf("%d", n);
    } else 
    {
        bin(n / 2); //
        printf("%d", n % 2); // 뒤에서부터 출력 0 0 1 0 1 
    }
}

int main() 
{
    int number;
    \
    printf("Please enter a number: ");
    scanf("%d", &number);
    bin(number);
    return 0;
}



