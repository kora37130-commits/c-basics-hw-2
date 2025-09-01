#include <stdio.h>
int main() {
    int min, max;
    scanf("%d", &min);
    scanf("%d", &max);
    if (min > max) {
        int temp = min;
        min = max;
        max = temp;
    }
    int a = 0, b = 1, next;
    while (a < min) {
        next = a + b;
        a = b;
        b = next;
    }
    while (a <= max) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
