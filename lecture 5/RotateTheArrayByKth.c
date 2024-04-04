#include<stdint.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        int temp=arr[n-1];
        for(int j=n-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;

    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        }

    return 0;

}

//doubt 