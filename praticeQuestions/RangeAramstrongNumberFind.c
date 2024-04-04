//Implement a program to find the Armstrong numbers within a given range.

#include <stdio.h>
#include <math.h>
int Armstrong(int n)
{
    int sum = 0, temp = n, digit;
    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }
    return sum == n;
}
int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Armstrong numbers between %d and %d are: ", n1, n2);
    for (int i = n1; i <= n2; i++)
    {
        if (Armstrong(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}
