#include <iostream>
using namespace std;

int maxof(int, int);
int maxof(int, int, int);

int main()
{
	cout << "大きい値は" << maxof(10, 20) << "です。" << endl;
	cout << "大きい値は" << maxof(10, 20, 30) << "です。" << endl;

	return 0;
}

int maxof(int nx,int ny)
{
	 return(nx > ny) ? nx: ny;
	//if (nx > ny) { return nx; }
	//else { return ny; }
}

int maxof(int nx,int ny,int nz)
{
	int max = nx;
	if (ny > max) { max = ny; }
	if (nz > max) { max = nz; }

	return max;

}