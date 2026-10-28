#include <stdio.h>

int main(void) {
    int offset[5] = {0, 6, 12, 18, 22};
    int nzks, i;

    printf("Nzks: ");
    scanf("%d", &nzks);
    for (i = 0; i < 5; i++)
        printf("Task 5.%d: variant %d\n", i + 1, (nzks + offset[i]) % 30 + 1);
    return 0;
}
