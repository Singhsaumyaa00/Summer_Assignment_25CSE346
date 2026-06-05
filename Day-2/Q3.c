#include <stdio.h>
int main()
{
    int n,temp,digit,product =1;
    printf("Enter the number");
    scanf("%d",&n);

    temp =n;
    while(temp>0)
    {
        digit = temp % 10;
        product = product * digit;
        temp = temp /10;

    }
    printf("Product of digit of %d is %d",n , product);
    return 0;
}