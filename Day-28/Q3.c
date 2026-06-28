#include <stdio.h>
int main()
{
    char name[50];
    int tickets;
    printf("Enter name: ");
    scanf("%s",name);
    printf("Enter number of tickets: ");
    scanf("%d",&tickets);
    printf("\npassanger name: %s",name);
    printf("\ntickets booked:%d",tickets);
    return 0;
}