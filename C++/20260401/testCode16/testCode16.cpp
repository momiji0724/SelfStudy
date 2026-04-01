#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum SCENE
{
    TITLE,
    GAME,
    RESULT = 5,
    CLEAR,
};

int main(void)
{
    int Data;
    printf("実行したい処理の番号を入力してください : ");
    scanf("%d", &Data);

    switch (Data)
    {
    case TITLE:
        printf("TITLEの場合の処理を実行\n");
        break;
    case GAME:
        printf("GAMEの場合の処理を実行\n");
        break;
    }
    return 0;
}
