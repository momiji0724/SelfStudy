#include <stdio.h>

int main()
{
    char cd = 'A';
    printf("%c\n",cd);
    printf("%d\n",cd);

    cd = '1';
    printf("%c\n", cd);
    printf("%d\n", cd);

    char str[] = "ABC";
    printf("%s\n", str);

    char jstr[] = "あいうえお";
    printf("%s\n", jstr);

    return 0;
}
