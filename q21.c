#include <stdio.h>

int main() {
    int L, N, W, H;

    scanf("%d", &L);      // Minimum dimension
    scanf("%d", &N);      // Number of photos

    while (N--) {
        scanf("%d %d", &W, &H);

        if (W < L || H < L) {
            // Case 1: Any side is smaller than L
            printf("UPLOAD ANOTHER\n");
        }
        else {
            // Both sides are >= L
            if (W == H) {
                // Case 2a: It's square
                printf("ACCEPTED\n");
            } else {
                // Case 2b: Need cropping
                printf("CROP IT\n");
            }
        }
    }

    return 0;
}