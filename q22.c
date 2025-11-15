#include <stdio.h>

int main() {
    char word[1001];
    int zCount = 0, oCount = 0, i = 0;

    scanf("%s", word);

    // Count Z's and O's manually (no string.h)
    while (word[i] != '\0') {
        if (word[i] == 'z' || word[i] == 'Z')
            zCount++;
        else if (word[i] == 'o' || word[i] == 'O')
            oCount++;
        i++;
    }

    // Check the condition
    if (oCount == 2 * zCount)
        printf("Yes");
    else
        printf("No");

    return 0;
}
