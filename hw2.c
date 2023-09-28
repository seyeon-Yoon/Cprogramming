#include <stdio.h>

int main()
{
    float miles, km;
    printf("Please enter kilometers:");
    scanf("%f", &km);
    miles=0.625*km;
    printf("%.1f km is equal to %.1f miles.", km, miles);
   
    return 0;
}