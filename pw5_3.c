#include <stdio.h>

int main(void) {
    int n, i, sign;
    double sum;
    printf("N: ");
    while (scanf("%d", &n) == 1 && n > 0) {
        sum = 0.0;
        sign = 1;
        for (i = 1; i <= n; i++) {
            sum += sign * (double)i / (i + 1);
            sign = -sign;
        }
        printf("SUM: %.6f\nN: ", sum);
    }
    return 0;
}
