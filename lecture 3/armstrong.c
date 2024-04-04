#include<stdio.h>
int main(){
    // char user[4];
    // printf("Want  to check armstrong number YES/NO :");
    // scanf("%c",&user);
    // while(user=='YES'){
    int a;
    printf("Enter the number to check armstrong number: ");
    scanf("%d",&a);
    int orginal_number=a;
    int remainder;
    int result=0;
    while(orginal_number!=0){
        remainder=orginal_number % 10;
        orginal_number=orginal_number/10;
        result=result+(remainder*remainder*remainder);
    }
    if (result==a) {
        printf("The number is armstrong number");
    }
    else{
        printf("The number is not armstrong number");
    }
    // }
    return 0;
}