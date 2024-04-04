//write a programe to check whether a string is pallalindrome or not using recurssion
#include <stdio.h>
int check(char str[],int i,int j){
    if(i>j){
        return 1;
    }
    else if(str[i]!=str[j]){
        return 0;
    }
    else{
        return check(str,i+1,j-1);
    }
}
int main(){
    char str[100];
    printf("Enter the string :");
    scanf("%s",str);
    if(check(str,0,strlen(str)-1)){
        printf("The string is a palindrome");
    }
    else{
        printf("The string is not a palindrome");
    }
    return 0;
}