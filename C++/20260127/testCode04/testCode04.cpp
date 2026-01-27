#include <iostream>
#include "MyClass.h"
using namespace std;

int main()
{
	//int型同士の足し算
	int ax = 10, bx = 20;
	int cx = ax + bx;

	cout << "cx=" << cx << endl;

	//独自のクラス型の足し算
	MyClass obj1(10), obj2(20);

	//MyClass obj3 = obj1.operator+ (obj2); ←下の式と同じ意味
	MyClass obj3 = obj1 + obj2;

	cout << "obj3=" << obj3 << endl;

	return 0;
}
