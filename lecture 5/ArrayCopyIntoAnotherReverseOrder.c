#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n]; 
    int brr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Updated Array after coping content abd reverse the order is : ");
    for(int i=n-1;i>=0;i--){
        brr[n-i]=arr[i];
        printf("%d ",brr[n-i]);
    }

    printf("\nThe Original Array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}