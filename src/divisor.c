#include <stdio.h>

int gcd(int a, int b);

int main(void) {
    printf("%d\n", gcd(12, 48));
    printf("%d\n", gcd(0, 1));
    printf("%d\n", gcd(12, 3));
    return 0;
}

int gcd(int a, int b) {
    int holder = 0;
    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            holder = i;
        }
    }
    return holder;
}
