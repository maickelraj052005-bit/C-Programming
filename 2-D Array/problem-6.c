#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<c;i++){
            sum+=arr[0][i];
   }
    int max=sum; //3
    int min=sum;
    // int sum=0;
    int diff=0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];

        }
           if(sum>max){// 3>3F //20>3T
            max=sum; //20
           }
           if(sum<min){
            min=sum;
           }
           
           
           
           
        
    }
    diff=max-min;
    printf("%d",diff);
}