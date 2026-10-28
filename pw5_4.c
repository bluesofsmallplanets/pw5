#include <stdio.h>

#define SIZE 8

int main(void) {
    double arr[SIZE], sum = 0.0;
    int i;
    for (i = 1; i <= SIZE; i++) {
        arr[i - 1] = i * i * i;
        sum += arr[i - 1];
        printf("%.2f ", arr[i - 1]);
    }
    printf("\n%.2f\n", sum / SIZE);
    return 0;
}
