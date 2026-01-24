#include <iostream>
using namespace std;

class Date
{
private:
	int	year;	//年
	int month;	//月
	int day;    //日
public:
	void SetDate(int y, int m, int d)
	{
		year = y; month = m; day = d;
	}
	int GetYear() { return year; }
	int GetMonth() { return month; }
	int GetDay(){return day;}
};

int main(void)
{
	Date RioOlympic;
	Date TokyoOlympic;

	RioOlympic.SetDate(2016, 8, 5);
	cout << "リオデジャネイロオリンピック開催日は、"
		<< RioOlympic.GetYear() << "年"
		<< RioOlympic.GetMonth() << "月"
		<< RioOlympic.GetDay() << "日です" << endl;

	TokyoOlympic.SetDate(2020, 8, 5);
	cout << "東京オリンピック開催日は、"
		<< TokyoOlympic.GetYear() << "年"
		<< TokyoOlympic.GetMonth() << "月"
		<< TokyoOlympic.GetDay() << "日です" << endl;

	return 0;
}

