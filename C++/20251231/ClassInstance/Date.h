#pragma once
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int, int, int);
	~Date();
	int GetYear() const { return year; }
	int GetMonth() const { return month; }
	int GetDay() const { return day; }
};

