#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++) {
        int count=0;
        for(int j=0;j<c;j++) {
            for(int k=j+1;k<c;k++) {
                if(arr[i][j]==arr[i][k]) {
                    count=1;
                    break;
                }
            }
            if(count)
                break;
        }

        if(count==0) {
            printf("%d",i);
            return 0;
        }
    }
}
