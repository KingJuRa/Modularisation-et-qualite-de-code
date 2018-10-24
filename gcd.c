#include <stdio.h>
#include <stdlib.h>
Gcd(int A, int b) {
    
    int T;

    do {

        if (A < b) {
            T = A;
            A = b;
            b = T;
        }

        A = A - b;

    } while (A);

    return b;
}
