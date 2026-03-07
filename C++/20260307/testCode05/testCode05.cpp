#include <stdio.h>

int main(void)
{   
    int Num = 10;
    printf("Num:%d\n", Num);
    printf("\n");

    Num = 20;
    printf("Num=20:\n");
    printf("Num:%d\n", Num);
    printf("\n");

    Num = 20 + 30;
    printf("Num= 20 + 30:\n");
    printf("Num:%d\n", Num);

    Num = 30 + 20;
    printf("Num= 30 - 20:\n");
    printf("Num:%d\n", Num);

    Num = 5 * 8;
    printf("Num= 5 * 8:\n");
    printf("Num:%d\n", Num);

    Num = 20 / 5;
    printf("Num= 20 / 5:\n");
    printf("Num:%d\n", Num);

    Num = 20 % 3;
    printf("Num= 20 %% 3:\n");
    printf("Num:%d\n", Num);

    Num = Num + 10;
    printf("Num = Num + 10:\n");
    printf("Num:%d\n", Num);
    printf("\n");

    Num += 10;
    printf("Num += 10:\n");
    printf("Num:%d\n", Num);
    printf("\n");

    Num ++;
    printf("Num ++:\n");
    printf("Num:%d\n", Num);
    printf("\n");

    Num --;
    printf("Num --:\n");
    printf("Num:%d\n", Num);
    printf("\n");

    Num = 2 + 3 *4;
    printf("Num = 2 + 3 * 4:\n");
    printf("Num:%d\n", Num);
    Num = (2 + 3) * 4;
    printf("Num = (2 + 3) * 4:\n");
    printf("Num:%d\n", Num);

    printf("\n");



    return 0;
}
