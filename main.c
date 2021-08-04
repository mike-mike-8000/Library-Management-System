#include <stdio.h>
#include <stdlib.h>

char username;
char password;

int main()
{
    printf("Library Management System\n");
    printf("Enter Username:");
    scanf("%d",&username);
    printf("Enter Password:\n");
    scanf("%d",&password);
    printf("Choose Operation\n");
    printf("1. Add Book\n");
    printf("2. Edit Book\n");
    printf("3. Delete Book\n");
    return 0;
}
