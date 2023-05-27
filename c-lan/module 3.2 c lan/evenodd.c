
#include <stdio.h>

int main() {
    int numbers[10],i;
    int evenCount = 0, oddCount = 0;

    printf("Enter 10 numbers:\n");

    // Input numbers from the user
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Determine count of even and odd numbers
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Display the results
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);

    return 0;
}

