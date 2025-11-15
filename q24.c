#include <stdio.h>

int main() {
    char s[1001];
    int i = 0;

    // Read the string
    scanf("%s", s);

    // Traverse each character manually
    while (s[i] != '\0') {
        // If lowercase, convert to uppercase
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;   // ASCII difference
        }
        // If uppercase, convert to lowercase
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
        i++;
    }

    // Print the modified string
    printf("%s", s);

    return 0;
}
