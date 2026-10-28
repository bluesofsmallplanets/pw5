#include <stdio.h>

double calc(double a, double b) {
    return (a + b) * (a + b) / (a * a + b * b);
}

int main(void) {
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2)
        printf("%.4f\n", calc(a, b));
    return 0;
}
