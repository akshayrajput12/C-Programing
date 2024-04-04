//Create a function to find the ASCII value of a character

#include <stdio.h>
void ASCII(char ch){
    
    printf("The ASCII value of %c is : %d", ch, ch); // syntax for ASCII value print
    return;
}
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    ASCII(ch);
    return 0;
}