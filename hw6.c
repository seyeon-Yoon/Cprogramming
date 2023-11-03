#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int nums[5];
    int odd[5], even[5];
    int oddcount = 0, evencount = 0;

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (nums[i] % 2 == 0) {
            even[evencount++] = nums[i];
        }
        else {
            odd[oddcount++] = nums[i];
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < oddcount; i++) {
        printf("%d ", odd[i]);
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < evencount; i++) {
        printf("%d ", even[i]);
    }

    return 0;
}
