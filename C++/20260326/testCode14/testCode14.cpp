#include <stdio.h>

struct PERSONAL
{
    char Name[32];  //名前
    int Age;        //年齢
    float Height;   //身長
    float Weight;   //体重
};

int main(void)
{
    PERSONAL Data = {"高橋",16,65,68.2};
    Data.Age += 1;
    printf("%s\n", Data.Name);
    printf("%d\n", Data.Age);
    printf("%.2f\n", Data.Height);
    printf("%.2f\n", Data.Weight);

    PERSONAL List[3] =
    {
        {"佐藤",20,1.75,58.2},
        {"鈴木",21,1.55,68.2},
        {"田中",20,1.85,78.2},

    };
    for(int i = 0; i < 3; i++)
    {
        printf("%d[%s/%d%.2f/%.2f]\n", i, List[i].Name, List[i].Age, List[i].Height, List[i].Weight);
    }

    return 0;
}
