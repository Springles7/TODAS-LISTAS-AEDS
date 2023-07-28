#include <stdio.h>
#include <stdlib.h>

int rec(int a, int b, int r) {
    if (b != 0) {
        r = a % b;
        a = b;
        b = r;
        return rec(a, b, r);
    }
    return a;
}

int main() {
    int a = 125;
    int b = 105;
    int r;
    a = rec(a, b, r);
    printf("%i", a);
    return 0;
}
