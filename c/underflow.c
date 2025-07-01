#include <stdio.h>
#include <float.h>
#include <limits.h>

int main() {
    float x = 1.0;

    while (x > 0) {
        printf("\n");     
        printf("x: %.20e\n", x);
        printf("Ainda não deu undeflow, bora dividir por 2 dnv.\n");
        x /= 2.0;
        printf("\n");     
    }

    printf("x teve um underflow.\n");

    return 0;
}
