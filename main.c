#include <stdio.h>

/***
 * A simple example to get an array lenght
 * 
 */

int main() {
    double real[22];
    long int sizeArray = sizeof(real) / sizeof(real[0]);

    printf("Tamanho do primeiro elemento do array: %ld\n", sizeof(real[0]));

    printf("Tamanho do array: %ld\n", sizeArray);

    return 0;
}