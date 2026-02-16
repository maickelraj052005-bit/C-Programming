#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d",&r,&c);

    int arr[r][c];
    for (int i=0;i<r;i++) {
        for (int j=0;j<r;j++) {
            scanf("%d",&arr[i][j]);// 3000 4000 5000 sum=12000
                                   // 2000 2000 2000 sum=6000 avg=6000 -so print 1
        }
    }
    int index;
    int num=0;
    for (int i=1;i<r;i++) {
        int sum = 0;
        for (int j=0;j<c;j++) {
            sum+=arr[i][j];
        }

        if (num<sum) {
            index=i;
        }
        num=sum;
    }

    printf("%d",index);
    return 0;
}
