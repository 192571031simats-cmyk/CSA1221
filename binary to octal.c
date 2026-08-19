#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, octal = 0;
    int base = 1, remainder, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    
    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    
    while (decimal > 0) {
        remainder = decimal % 8;
        octal = octal + remainder * place;
        decimal = decimal / 8;
        place = place * 10;
    }

    printf("Octal number = %d\n", octal);

    return 0;
}
