#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            for(int x=0;x<r;x++) {
                for(int y=0;y<c;y++) {
                    if(i==x && j==y)
                        continue;
                        if(a[i][j] == a[x][y] &&
                       (x>i || (x==i && y>j))) {
                        printf("%d",a[i][j]);
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}
