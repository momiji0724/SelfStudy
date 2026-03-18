#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int Age;
    int Money = 10000;;

    printf("未成年には販売できません\n");
    printf("貴方の年齢は？\n");
    scanf("%d", &Age);

    if(Age >= 20)
    {
        int iCount;
        printf("一つ980円です、いくつ買いますか？\n");
        scanf("%d",&iCount);

        Money -= 980 * iCount;

        printf("お買い上げありがとうございます。\n");
        printf("残り所持金 %d 円\n", Money);
    }
    else
    {
        printf("販売できません。\n");
    }

    return 0;
}

