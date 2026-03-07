#include <stdio.h>

int main()
{
    int NumA = 10;
    int NumB = 20;
    printf("NumA =%d\n", NumA);
    printf("NumB =%d\n", NumB);
    printf("\n");

    printf("比較演算子結果\n");
    printf("NumA < NumB = %d\n", NumA < NumB);
    printf("NumA <= NumB = %d\n", NumA <= NumB);
    printf("NumA > NumB = %d\n", NumA > NumB);
    printf("NumA >= NumB = %d\n", NumA >= NumB);
    printf("NumA == NumB = %d\n", NumA == NumB);
    printf("NumA != NumB = %d\n", NumA != NumB);
    printf("\n");

    printf("論理積(&&)の結果\n");
    printf("1 && 1 =%d\n",1 && 1);
    printf("1 && 0 =%d\n", 1 && 0);
    printf("0 && 1 =%d\n", 0 && 1);
    printf("0 && 0 =%d\n", 0 && 0);
    printf("\n");

    printf("論理和(||)の結果\n");
    printf("1 || 1 =%d\n", 1 || 1);
    printf("1 || 0 =%d\n", 1 || 0);
    printf("0 || 1 =%d\n", 0 || 1);
    printf("0 || 0 =%d\n", 0 || 0);
    printf("\n");

    NumA = 10;
    NumB = 20;
    int NumC = 30;
    printf("NumA =%d\n", NumA);
    printf("NumB =%d\n", NumB);
    printf("NumC =%d\n", NumC);
    int AB = NumA < NumB;
    int CB = NumC < NumB;
    printf("NumA < NumB = %d\n", AB);
    printf("NumC < NumB = %d\n", CB);
    printf("NumA < NumB && NumC < NumB = %d;\n", AB && CB);
    printf("NumA < NumB || NumC < NumB = %d;\n", AB || CB);

    return 0;
}
