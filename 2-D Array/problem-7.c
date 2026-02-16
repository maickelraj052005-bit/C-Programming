#include <stdio.h>

int main()
{
    int r, c;
    int i, j, k;
    int count = 0;
    scanf("%d %d",&r,&c);

    int arr[r][c]; 
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            int MinRow=1;
            int MaxCol=1;
            for(k=0;k<c;k++){
                if(arr[i][j]>arr[i][k]){
                    MinRow=0;
                    break;
                }
            }
            for(k=0;k<r;k++){
                if(arr[i][j]<arr[k][j]){
                    MaxCol=0;
                    break;
                }
            }

            if(MinRow&&MaxCol){
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
