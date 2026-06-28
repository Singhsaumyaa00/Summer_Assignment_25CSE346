#include <stdio.h>
int main()
{
    char book[50];
    char author[50];
    printf("Enter book number: ");
    scanf("%s",book);
    printf("Enter author name: ");
    scanf("%s",author);
    printf("\nbook name: %s",book);
    printf("\nauthor name: %s",author);
    return 0;
}