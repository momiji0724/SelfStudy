#include<iostream>
#include "Date.h"
using namespace std;
void print(string, Date);

int main(void)
{
	const Date BeijingOlympic(2008, 8, 8);
	Date RioOlympic(2016, 8, 5);
	Date TokyoOlympic(2020, 7, 24);

	print("北京オリンピック開催日は、", BeijingOlympic);
	print("リオデジャネイロオリンピック開催日は、",RioOlympic);
	print("東京オリンピック開催日は、", TokyoOlympic);

	return 0;
}

void print(string str,Date obj)
{
	cout << str << obj.GetYear() << "年"
		<< obj.GetMonth() << "月"
		<< obj.GetDay() << "日です。" << endl;
}