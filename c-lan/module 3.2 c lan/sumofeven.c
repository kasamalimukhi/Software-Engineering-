#include <stdio.h>

int main() {
    int n,i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        sum += i;
    }

    printf("The sum of even numbers up to %d is: %d\n", n, sum);

    return 0;
}

