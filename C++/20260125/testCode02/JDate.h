#pragma once
#include <string>
#include "Date.h"


// ˜a—ğƒNƒ‰ƒX
class JDate : public Date
{
public:
	enum Gengou { Meiji, Taisho, Showa, Heisei };

	JDate(int y, int m = 1, int d = 1) :Date(y, m, d) {}
	JDate(Gengou, int, int, int);

	~JDate();
	std::string GetYear();

};
