#include <stdio.h>

int main() {
    char x = 'x';
    int y = 37;
    long int z = 9035234;
    printf("Hex char: %p\tHex int: %p\tHex long: %p\n", &x, &y, &z);
    printf("Hex char: %ld\tHex int: %ld\tHex long: %ld\n", &x, &y, &z);

    char *px = &x;
    int *py = &y;
    long int *pz = &z;
    printf("Hex char: %p\tHex int: %p\tHex long: %p\n", px, py, pz);

    *px = 'y';
    *py = 42;
    *pz = 1983992;
    printf("Hex char: %c\tHex int: %d\tHex long: %ld\n", x, y, z);
    unsigned int n = 18347;
    int *pn1 = &n;
    char *pn2 = &n;
    printf("pn1: %p pn1 points to: %u\t pn2: %p pn2 points to: %u\n", pn1, *pn1, pn2, *pn2);
    printf("n as hexadecimal: %x\t n as unsigned: %u\n", n, n);
    int t;
    for(t = 0; t < 4; t++) {
        printf("byte in decimal integer: %hhu\t byte in hex: %hhx\n", *(pn2 + t), *(pn2 + t));
    }
    int i;
    for (i = 0; i < 4; i++) {
        *(pn2+i) += 1;
        printf("hex: %x\t decimal: %u\n", n, n);
    }
    for(t = 0; t < 4; t++) {
        printf("byte in decimal integer: %hhu\t byte in hex: %hhx\n", *(pn2 + t), *(pn2 + t));
    }
    for (i = 0; i < 4; i++) {
        *(pn2+i) += 16;
        printf("hex: %x\t decimal: %u\n", n, n);
    }
    for(t = 0; t < 4; t++) {
        printf("byte in decimal integer: %hhu\t byte in hex: %hhx\n", *(pn2 + t), *(pn2 + t));
    }
}