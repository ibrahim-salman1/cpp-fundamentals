#include <stdio.h>
#include <conio.h>

int main() {
    int a;

    for(a = 32; a <= 127; a++) {
        printf("\t%c", a);
        if ((a - 31) % 10 == 0) // Line break after every 10 characters
            printf("\n");
    }

    getch();
    return 0;
}
