#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int Sum = 0;
    int Count = 0;
    while(1)
    {
        int Data;
        printf("0～100の数値を入力してください(-1で繰り返しを終了)\n");
        scanf("%d", &Data);

        if (Data == -1) 
        {
            break;
        }
        if(Data > 100)
        {
            continue;
        }
        Sum += Data;
        Count++;
    }
    printf("入力された値の合計%d,回数%d\n", Sum, Count);

    return 0;
}
