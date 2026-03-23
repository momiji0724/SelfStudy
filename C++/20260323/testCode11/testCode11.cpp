#include <stdio.h>

int main()
{
    int Num[3];
    Num[0] = 10;
    Num[1] = 20;
    Num[2] = 30;
    for(int Count=0; Count<3; Count++)
    {
        printf("Num[%d] = %d\n",Count, Num[Count]);

    }
    //printf("Num[0] = %d\n", Num[0]);
    //printf("Num[1] = %d\n", Num[1]);
    //printf("Num[2] = %d\n", Num[2]);

    return 0;
}
