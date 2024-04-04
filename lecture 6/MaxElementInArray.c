#include<stdio.h>
int main(){
    int n;
    int m;
    printf("Enter the number of rows and columns :");
    scanf("%d %d" ,&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max= arr[0][0];
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    printf("The Maximum value in array is : %d",max);
    return 0;
}