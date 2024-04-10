//write a c programme for binary search using recurssion
#include<stdio.h>
int binarysearch(int arr[],int l,int r,int x){
    if(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            return binarysearch(arr,l,mid-1,x);
        }
        else{
            return binarysearch(arr,mid+1,r,x);
        }
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the element you want to search : ");
    scanf("%d",&x);
    int result=binarysearch(arr,0,n-1,x);
    if(result==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at index : %d",result);
    }
    return 0;
}
