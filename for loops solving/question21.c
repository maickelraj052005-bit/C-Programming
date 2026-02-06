#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    int decimal = 0, i = 0, rem;
    scanf("%lld", &n);

    for (; n != 0; n /= 10) {
        rem = n % 10;
        decimal += rem * pow(2, i);
        i++;
    }
    printf("%d", decimal);
    return 0;
}