#include <iostream>

int main()
{
	char ch = 0x41; //16進数で'A'のコード

	printf("ch = %c\n", ch);	//文字として表示
	printf("ch = %d\n", ch);	//10進数として表示
	printf("ch = %x\n", ch);	//16進数として表示
	printf("ch = %o\n", ch);	//8進数として表示

	return 0;
}

