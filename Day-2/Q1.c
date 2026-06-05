#include <stdio.h>
int main()
{
    int n,temp,digit,sum=0;
    printf("Enter the number");
    scanf("%d",&n);

    temp=n;
    while(temp>0)
    {
    digit =temp %10; // For remainder
    sum = sum + digit; // Adding that digit in sum
    temp = temp/10; // For eliminating last digit
    }
    printf("Sum of digit of %d is %d",n,sum);

    return 0;



}