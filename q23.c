#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int green, purple;
        int n;
        int solve1 = 0, solve2 = 0;
        scanf("%d %d", &green, &purple);
        scanf("%d", &n);

        while (n--) {
            int a, b;
            scanf("%d %d", &a, &b);

            if (a == 1) solve1++;
            if (b == 1) solve2++;
        }

        // Calculate two possibilities
        int cost1 = solve1 * green + solve2 * purple;
        int cost2 = solve1 * purple + solve2 * green;

        // Minimum cost
        if (cost1 < cost2)
            printf("%d\n", cost1);
        else
            printf("%d\n", cost2);
    }

    return 0;
}
