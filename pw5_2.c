#include <stdio.h>

#define HEIGHT 5

int main(void) {
    int i, j;
    for (i = 1; i <= HEIGHT; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == HEIGHT)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
