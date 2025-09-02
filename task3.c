#include <stdio.h>
#include <stdlib.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int n, size;
    scanf("%d", &n);
    size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int val = max(abs(i - (n - 1)), abs(j - (n - 1))) + 1;
            printf("%d ", val);
        }
        printf("\n");
    }
    return 0;
}
