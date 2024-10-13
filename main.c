#include <stdio.h>

int main() {
    int n, i = 0 , potenza = 1;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    while (i < n) {
        printf("2^%d = %d\n", i, potenza);
        potenza *= 2;
        i++;
    }

    return 0;
}