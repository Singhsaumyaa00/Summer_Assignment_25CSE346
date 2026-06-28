#include <stdio.h>
int main()
{
    char name[50];
    int acc;
    float balance;
    printf("Enter name: ");
    scanf("%s",name);
    printf("Enter account number: ");
    scanf("%d",&acc);
    printf("Enter balance: ");
    scanf("%f",&balance);
    printf("\nname: %s",name);
    printf("\naccount number: %d",acc);
    printf("\nbalance: %2f",balance);
    return 0;
}