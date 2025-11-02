#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;  // not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;  // divisible by i, not prime
    }
    return 1;  // prime
}

int main() {
    int n, i, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    printf("Number of prime numbers in the array: %d\n", count);

    return 0;
}
