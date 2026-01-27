#include <iostream>
using namespace std;

int& func(int num = 0)
{
	static int val; //静的変数の定義
	val += num; //引数の格納

	return val;


}
int main()
{
	func() = 10;       //func()関数のvalに値を設定

	cout << "func()の戻り値=" << func() << endl;
	cout << "func()の戻り値=" << func(20) << endl;

	return 0;
}