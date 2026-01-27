#pragma once
class MyClass
{
	int num;

public:
//+演算子をオーバーロード
	//戻り値の関数  +関数の名前(引数)
	MyClass& operator+(const MyClass& a)
	{
		MyClass work;
		work.num = this->num + a.num;
		return work;
	}
	//-演算子をオーバーロード
	MyClass& operator-(const MyClass& a)
	{
		MyClass work;
		work.num = this->num + a.num;
		return work;
	}



	operator int() const { return num; }

	MyClass(int x = 0) { num = x; } //コンストラクタ
	int getNum() { return this->num; }
	void setNum(int x) { num = x; }

};

