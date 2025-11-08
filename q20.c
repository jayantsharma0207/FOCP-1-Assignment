#include <stdio.h>

int singleNumber(int nums[], int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];   // XOR logic to find the unique element
    }
    return result;
}

int main() {
    int numsSize;

    printf("Enter the number of elements: ");
    scanf("%d", &numsSize);

    int nums[numsSize];
    printf("Enter %d integers: ", numsSize);

    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    int ans = singleNumber(nums, numsSize);
    printf("The single number is: %d\n", ans);

    return 0;
}