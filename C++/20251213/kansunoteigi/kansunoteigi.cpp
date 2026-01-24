#include <stdio.h>
// うるう年の計算
// 西暦で示した年が4で割り切れる年はうるう年です
// 西暦で示した年が100で割り切れる年はうるう年ではありません
// 西暦で示した年が400で割り切れる年はうるう年です
int IsLeepYear(int);//プロトタイプ宣言

int main()
{

    if (true == IsLeepYear(2016)) 
    {
        printf("うるう年です。\n");

    }
    else
    {
        printf("うるう年ではありません。\n");
    }
    return 0;

}

int IsLeepYear(int year) 
{
    return (0 == (year & 400)) ||
    ((0 != (year % 100)) &&
        (0 == (year % 4)));
}