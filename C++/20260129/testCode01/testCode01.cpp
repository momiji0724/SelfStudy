#include <iostream>
using namespace std;

class Animal
{
public:
	//virtual void speak() { cout << "私は動物です。" << endl; }
	virtual void speak() = 0; //純粋仮想関数
};

class Pig:public Animal
{
public:
	void speak() { cout << "私は豚です。" << endl; }
};

class Elephant:public Animal
{
public:
	void speak() { cout << "私は象です。" << endl; }
};
class Penguin :public Animal
{
public:
	void speak() { cout << "私はペンギンです。" << endl; }
};

int main()
{
	Animal *ptr[3];


	Pig pig_obj;
	Elephant elephant_obj;
	Penguin penguin_obj;

	ptr[0] = &pig_obj;
	ptr[1] = &elephant_obj;
	ptr[2] = &penguin_obj;


	for (int i =0; i<3; i++)
	{
		ptr[i]->speak();
	}


	return 0;
}
