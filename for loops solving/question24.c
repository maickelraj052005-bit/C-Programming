#include <stdio.h>

int main() {
    int n, reversed = 0, original, rem;
    scanf("%d", &n);
    original = n;

    for (; n > 0; n /= 10) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
    }

    if (original == reversed) printf("Yes");
    else printf("No");
    return 0;
}