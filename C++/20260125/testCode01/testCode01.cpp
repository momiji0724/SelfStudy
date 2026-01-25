#include <iostream>

using namespace std;

class MathConstants
{
private:
	const double PI;
	const double NAPIER;
	const double PYTHAGORAS;
public:
	MathConstants(double p,double n,double py)
		:PI(p),NAPIER(n),PYTHAGORAS(py)
	{
	}
	
	double GetPi(){ return PI; }
	double GetNapier() { return NAPIER; }
	double GetPythagoras() { return PYTHAGORAS; }

};

int main()
{
	MathConstants math(3.14, 2.71, 1.41);

	cout << "PI=" << math.GetPi() << endl;
	cout << "NAPIER=" << math.GetNapier() << endl;
	cout << "PYTHAGORAS=" << math.GetPythagoras() << endl;
	return 0;
}

