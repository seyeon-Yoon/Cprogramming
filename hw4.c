#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, i, isPrime = 1; // 소수임을 전제.

    printf("Please enter a number: ");
    scanf("%d", &n);

    if (n < 2) //0과 1은 소수가 아님.
    {
        printf("It is not a prime number.");
    }
    else
    {
        for (i = 2; i <= (n / 2); i++) //입력값을 절반으로 나눠서 그 값을 입력값에 나눔.
        {
            if (n % i == 0) // 약수가 있다는 뜻
            {
                isPrime = 0; //소수가 아니므로 0값을 반환
                break;
            }
        }

        if (isPrime) // isPrime이 1일 때 (즉, 소수일 때)
        {
            printf("It is a prime number.");
        }
        else //isPrime이 0 일 때 (즉, 소수가 아닐때)
        {
            printf("It is not a prime number.");
        }
    }

    return 0;
}
