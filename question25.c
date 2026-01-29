#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 0, temp, rem, digits = 0;
    scanf("%d", &n);
    
    temp = n;
    for (int i = n; i > 0; i /= 10) digits++;

    for (temp = n; temp > 0; temp /= 10) {
        rem = temp % 10;
        sum += pow(rem, digits);
    }

    if (sum == n) printf("Yes");
    else printf("No");
    return 0;
}