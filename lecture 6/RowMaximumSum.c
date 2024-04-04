#include<stdio.h>
int main(){

    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int MaxSumRow=0;
    int MaxSum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i =0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];

        }
        if(sum>MaxSum){
            MaxSum=sum;
            MaxSumRow= i+1;
        }
    }
    printf("The MaxSum is : %d and the row is : %d",MaxSum,MaxSumRow);
    return 0;
}