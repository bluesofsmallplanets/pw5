#include <stdio.h>

int main(void) {
    double x;
    int n = 1;
    for (x = 0.0; x <= 5.25; x += 0.5) {
        printf("%-4d %-10.4f %-10.4f\n", n, x, 1.0 / (x * x + 1.0));
        n++;
    }
    return 0;
}
