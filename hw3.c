#include <stdio.h>

int main()
{
    int i, j, k;
    for (i=5; i>0; i++)
    {
        for (j=0; j<5-i; j++)
        {
            printf(" ");
        }
        
        for (k=0; k<i*2+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
