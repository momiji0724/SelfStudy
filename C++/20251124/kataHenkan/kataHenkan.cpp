#include <iostream>

int main()
{
	int ax = 10;
	double fx = 3.14;

	printf("fx=%.2f\n", fx);
	fx = ax;	//暗黙の返還
	printf("fx=%.2f\n", fx);
	fx = 3.14;
	printf("fx=%.2f\n", fx);
	//	　↓キャスト
	ax = (int)fx;	//明示的な変換
	printf("ax=%d\n", ax);

	return 0;

}

