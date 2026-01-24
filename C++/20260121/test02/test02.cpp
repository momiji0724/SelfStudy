#include <iostream>
using namespace std;

namespace Japanese {
	void foo(void) {
		cout << "日本語の名前空間です。" << endl;
	}
}
namespace English {
	void foo(void) {
		cout << "英語の名前空間です。" << endl;
	}
}
using namespace English;
int main()
{
	foo();
	return 0;
}
