#include <stdio.h>

int searchInsert(int nums[], int numsSize, int target) {
    int left = 0, right = numsSize - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left; // position where target should be inserted
}

int main() {
    int numsSize, target;

    printf("Enter size of array: ");
    scanf("%d", &numsSize);

    int nums[numsSize];

    printf("Enter %d sorted integers: ", numsSize);
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    int index = searchInsert(nums, numsSize, target);
    printf("The target should be at index: %d\n", index);

    return 0;
}