#include<stdio.h>
int main(){
    //int to float number and float to int number

    //question : Take float input and print its fractional part

    float x;
    scanf("%f",&x);
    int y=x;
    float fractional=x-y;
    printf("%.1f",fractional);
    return 0;
}