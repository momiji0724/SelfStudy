#include<iostream>
#include<string>
#include "JDate.h"
using namespace std;
void print(string, JDate);

int main(void)
{
	const JDate BeijingOlympic(2008, 8, 8);
	JDate RioOlympic(2016, 8, 5);
	JDate TokyoOlympic(2020, 7, 24);

	print("北京オリンピック開催日は、", BeijingOlympic);
	print("リオデジャネイロオリンピック開催日は、", RioOlympic);
	print("東京オリンピック開催日は、", TokyoOlympic);

	return 0;
}

void print(string str, JDate obj)
{
	cout << str << obj.GetYear() << "年"
		<< obj.GetMonth() << "月"
		<< obj.GetDay() << "日です。" << endl;
}


