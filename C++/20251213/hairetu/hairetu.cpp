#include <stdio.h>
//　配列
int main()
{
    int array[5];

    array[0] = 10; //array[0] ←数字のことを添字
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;

    for (int i = 0;i < 5; i++)
        printf("array[%d]=%d\n", 1, array[i]);

    return 0;
}
