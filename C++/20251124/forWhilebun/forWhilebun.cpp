#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "真剣な遊びが将来につながる！！" << endl;
	}



int i = 0;
while (i < 3) 
{
	cout << "自分を信じてチャレンジ！！" << endl;
	if (i == 2)
		break;
	i++;
}

i = 0;
do 
{
	cout << "自由の扉は自分で開こう！！" << endl;
	i++;
} while (i < 3);

return 0;

}