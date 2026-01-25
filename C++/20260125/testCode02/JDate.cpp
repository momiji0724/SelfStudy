#include "JDate.h"
#include <string>

JDate::JDate(Gengou g, int y, int m = 1, int d = 1) :Date(y, m, d)
{
	switch (g)
	{
	case Meiji: year += 1867; break;
	case Taisho: year += 1911; break;
	case Showa: year += 1925; break;
	case Heisei: year += 1988; break;

	}

}


std::string JDate::GetYear()
{
	std::string s;
	unsigned long idate = year * 10000UL + month * 1000L + day;

	if (idate < 18680908UL)
		s = std::to_string(year);
	else if (idate < 19120730UL)
	{
		s = "–¾Ž¡";
		s += std::to_string(year - 1867);
	}
	else if (idate < 19261225UL)
	{
		s = "‘å³";
		s += std::to_string(year - 1911);
	}
	else if (idate < 19890108UL)
	{
		s = "º˜a";
		s += std::to_string(year - 1925);
	}
	else
	{
		s = "•½¬";
		s += std::to_string(year - 1988);
	}

	return s;

}
JDate::~JDate(){}
