#include <stdio.h>
void arrayPoint(int ptr[]);
int main()
{
    int i, vc[5] = { 10,20,30,40,50 };
    int* ptr = &vc[0];

    for (i = 0; i< 5; i++)
        printf("vc[%d]=%d\tptr[%d]=%d\t*(ptr + %d)=%d\n",
            i, vc[i], i, ptr[i], i, *(ptr + i));
    arrayPoint(ptr);


    return 0;
}

void arrayPoint(int ptr[])
{

    int i;
    for (i = 0; i < 5; i++)
        printf("tptr[%d]=%d\t*(ptr + %d)= %d\n",
            i, ptr[i], i, *(ptr + i));

}
