#include<stdio.h>
int main(){
    //intialization 
    //int arr[rows][coumun];
    int arr[2][2];
    //int arr[2][2]={{1,2}{3,4}}; this is second way of declarataion
    arr[0][0]=1;
    arr[0][1]=2;
    arr[1][0]=3;
    arr[1][1]=4;



    //for taking input from user
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d ",&arr[i][j]);
        }
    }


    //Print the elements of 2d Array
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



    //Some tricky initialisation which are correct
    //int arr[2][2]={{1,2},{2,4}};
    //int arr[2][2]={1,2,2,4}; here computer automatically takes start elements as rows elements
    //int arr[][2]={1,2,2,4};  here computer automatically understand the value of rows
   
    
    return 0;
}