#include <stdio.h>

int main() {
    // Declare and initialize a 3x3x2 array
    int a[3][3][2] = {{{0}}};

    // Print the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

