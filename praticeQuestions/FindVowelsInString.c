//Implement a function to find the number of vowels in a string.

#include <stdio.h>
int main()
{
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    printf("Number of vowels: %d", count);
    return 0;
}