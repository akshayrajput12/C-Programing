#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=4;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count=count+1;
        }
    }
    printf("The number of element greater than %d is : %d",x,count);
    return 0;
}