#include <iostream>
using namespace std;

//参照を用いて記述

void sumdif(int nx,int ny,int& sum ,int& diff)
{
	sum = nx + ny;
	diff = (nx > ny) ? nx - ny : ny - nx;

}
int main()
{
	int ax = 20;
	int bx = 30;
	int wa = 0;
	int sa = 0;

	sumdif(ax, bx, wa, sa);

	cout << "和=" << wa << endl;
	cout << "差=" << sa << endl;

	return 0;
}
