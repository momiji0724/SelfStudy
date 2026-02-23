#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int iNum = 10;
    short sNum = 100;
    long lNum = 1000;
    char cNum = 'A';
    float fNum = 2.5f;
    double dNum = 2.12345;

    printf("整数型の表示\n");
    printf("iNumに保存されている値を10進数で表示 %d\n", iNum);
    printf("sNumに保存されている値を10進数で表示 %hd\n", sNum);
    printf("lNumに保存されている値を10進数で表示 %ld\n", lNum);
    printf("iNumに保存されている値を8進数で表示 %o\n", iNum);
    printf("iNumに保存されている値を16進数で表示 %x\n", iNum);

    printf("iNumに保存されている値を4桁の10進数で表示 %4d\n", iNum);
    printf("iNumに保存されている値を4桁の桁ぞろえ0詰めで表示 %04d\n", iNum);
    printf("\n");

    printf("浮動小数点型の表示\n");
    printf("fNumに保存されている値を表示 %f\n", fNum);
    printf("dNumに保存されている値を表示 %lf\n", dNum);

    printf("fNumに保存されている値を小数点第二位まで表示 %.2f\n", fNum);
    printf("\n");

    printf("文字の表示\n");
    printf("cNumに保存されている値を文字で表示 %c\n",cNum);
    printf("\n");

    printf("フォーマット指定を間違えた場合\n");
    printf("int型の変数を%%fで表示しようとした場合 %f\n", iNum);
    printf("float型の変数を%%dで表示しようとした場合 %d\n", fNum);

    printf("scanfによる入力\n");
    printf("iNumに保存する変数を10進数で入力してください：");
    scanf(" %d", &iNum);
    printf("fNumに保存する実数を入力してください：");
    scanf(" %f", &fNum);

    printf("cNumに保存する文字を入力してください：");
    scanf(" %c", &cNum);
    printf("\n");

    printf("入力結果の確認表示\n");
    printf("iNumに保存されている値を10進数で表示 : %d\n", iNum);
    printf("fNumに保存されている値を表示 : %f\n", fNum);
    printf("cNumに保存されている値を文字で表示 : %c\n", cNum);

    return 0;



}
