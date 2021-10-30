#include <stdio.h>
int main()
{
    char ch;
    printf("\nEnter a character from the keyboard:");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
        printf("The Character is an uppercase letter\n");
    if (ch >= 97 && ch <= 122)
        printf("The Character is a lowercase letter\n");
    if (ch >= 48 && ch <= 57)
        printf("The Character is a digit\n");
    if ((ch >= 0 && ch < 48) || (ch > 57 && ch < 65) || (ch > 90 && ch < 97) || ch > 122)
        printf("The Character is a special symbol\n");
    return 0;
}