//Write a program to calculate the length of a string using a function
#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    gets(str);//gets is use to input string it is a function that takes input
    while (str[count] != '\0')
    {
        count++;
    }
    printf("Length of string: %d", count);
    return 0;
}