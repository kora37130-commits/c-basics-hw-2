#include <stdio.h>
int main() {
    int min, max;
    scanf("%d", &min);
    scanf("%d", &max);
    for (int i = min; i <= max; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
