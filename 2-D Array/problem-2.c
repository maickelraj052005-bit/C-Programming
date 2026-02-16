#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int maxProduct = a[0][0] * a[1][0];  
    for (int i = 0; i < R; i++) {
        for (int j=i+1;j<R;j++) {
            for (int x=0;x<C; x++) {
                for (int y=0; y<C;y++) {
                    int product = a[i][x] * a[j][y];
                    if (product > maxProduct) {
                        maxProduct = product;
                    }
                }
            }
        }
    }

    printf("%d", maxProduct);
    return 0;
}
