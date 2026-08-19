#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary number = ");

    while (i > 0) {
        i--;
        printf("%d", binary[i]);
    }

    return 0;
}
