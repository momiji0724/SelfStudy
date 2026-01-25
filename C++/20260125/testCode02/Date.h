#pragma once
class Date
{
protected:
	int year;
	int month;
	int day;
public:
	Date(int, int, int);
	virtual~Date();
	int GetYear() const { return year; }
	int GetMonth() const { return month; }
	int GetDay() const { return day; }
};