#include <stdio.h>

int main()
{
    //整数を表示するint型変数
    int Num = 1;
    printf("Num = %d\n",Num);

    //int型に小数を入れようとすると小数点以下を切り捨てる
    int Num2 = 2.5;
    printf("Num2 = %d\n", Num2);

    //float型 %の後はfとする
    float fNum = 2.5;
    printf("fNum = %f\n",fNum);
    return 0;
}
