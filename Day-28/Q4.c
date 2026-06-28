#include <stdio.h>
int main()
{
    char name[50];
    char phone[50];

    printf("Enter name: ");
    scanf("%s",name);
    printf("Enter phone number: ");
    scanf("%s",phone);
    printf("\nname: %s",name);
    printf("\nphone number: %s",phone);
    return 0;
}