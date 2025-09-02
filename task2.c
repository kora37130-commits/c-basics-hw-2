#include <stdio.h>
int isPrimeRecursive(int n, int i) {
    if (n <= 2) {
        return (n == 2) ? 1 : 0;
    }
    if (n % i == 0) {
        return 0;
    }
    if (i * i > n) {
        return 1;
    }
    return isPrimeRecursive(n, i + 1);
}
int main() {
    int num;
    scanf("%d", &num);
    if (num <= 1) {
        printf("0\n");
    } else {
        if (isPrimeRecursive(num, 2)) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}
