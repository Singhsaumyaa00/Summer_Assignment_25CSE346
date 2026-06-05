#include <stdio.h>
int main()
{
    int n,temp,digit,r=0;
    printf("Enter the number");
    scanf("%d",&n);
    temp =n;
    while(temp>0)
    {
        digit =temp %10; // To find last digit
        r = (r*10) + digit; // Reverse a number
        temp = temp /10; // To eliminate last digit from the number
    }
    printf("Reverse of %d is %d",n,r);

    return 0;
}