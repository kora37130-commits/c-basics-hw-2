#include <stdio.h>
#define COUNT 7
int main() {
    int start_num;
    scanf("%d", &start_num);
    for (int i = 0; i <= COUNT; i++) {
        printf("%d ", start_num + i);
    }
    printf("\n");
    return 0;
}
