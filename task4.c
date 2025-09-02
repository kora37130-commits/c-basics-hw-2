#include <stdio.h>
int main() {
    int m, n;
    char symbol;
    scanf("%d", &m);
    scanf("%d", &n);
    scanf(" %c", &symbol);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
    return 0;
}
