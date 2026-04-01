#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int Data;
    printf("実行したい処理の番号を入力してください : ");
    scanf("%d", &Data);

    switch(Data)
    {
    case 0:
        printf("0の場合の処理を実行\n");
        break;
    case 1:
        printf("1の場合の処理を実行\n");
        break;
    default:
        printf("それ以外の数値です\n");
        break;
    }
    return 0;
}
