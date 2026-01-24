#include <stdio.h>
int func();
int num = 10;//グローバル変数(広域変数)
int main()
{
	int ax = 20;//ローカル変数

	printf("num=%d\n", num);
	printf("ax=%d\n", ax);

	func();

	return 0;

}

// プロトタイプ宣言

int func() 
{
	printf("num=%d\n", num);
	
	return 0;

}
