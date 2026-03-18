#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int Age;
    printf("未成年には販売できません\n");
    printf("貴方の年齢は？\n");
    scanf("%d", &Age);

    if(Age >= 20)
    {
        printf("お買い上げありがとうございます\n");
    }
    else
    {
        printf("販売できません\n");
    }

    printf("またのご来店お待ちしております。\n");

    return 0;
}
