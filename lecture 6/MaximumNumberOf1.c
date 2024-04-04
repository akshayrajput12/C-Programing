#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int NumberOf1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                NumberOf1++;
            }
        }
    }
    printf("The maximum number of 1 in the array is : %d",NumberOf1);
    return 0;
}