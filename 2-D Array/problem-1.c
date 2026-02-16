#include<stdio.h>
int  main(){
    int r,c;
    scanf("%d",&r);
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    int max1=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max1=max;
                max=arr[i][j];
            
            }
            else if(arr[i][j]>max1 && arr[i][j]<max) {
                max1=arr[i][j];
            }
           
        }
    }
    printf("%d",max1);
}
