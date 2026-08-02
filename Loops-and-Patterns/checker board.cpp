#include <stdio.h>

int main() {
    int i, j;

    // Loop through rows (8 rows)
    for (i = 1; i <= 8; i++) {
        // Loop through columns (8 columns)
        for (j = 1; j <= 8; j++) {
            if ((i + j) % 2 == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}

