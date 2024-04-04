#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    float a[3]= {1.2,2.2,5.6};
    for(int i=0;i<3;i++){
        printf("%.2f ",a[i]);
    }

    char b[5]= {'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        printf("%c ",b[i]);
    }

    return 0;
}