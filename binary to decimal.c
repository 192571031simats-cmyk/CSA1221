#include <stdio.h>

int main() {
    int dec, bin = 0, place = 1, rem;

    printf("Enter decimal number: ");   
    scanf("%d", &dec);

    while (dec > 0) {
        rem = dec % 2;
        bin += rem * place;
        place *= 10;
        dec /= 2;
    }

    printf("Binary number = %d", bin);

    return 0;
}
