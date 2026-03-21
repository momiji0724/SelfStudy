#include <stdio.h>

int main(void)
{
    int Count = 0;
    while(Count < 5)
    {
        printf("%d回目の繰り返しです\n", Count);

        Count++;
    }
    printf("繰り返しが終了しました、%d回繰り返しました\n",Count);
    return 0;
}
