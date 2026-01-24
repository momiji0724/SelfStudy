#include<iostream>
using namespace std;

int main()
{
	char ch = 'A';
	char str[] = "きた～！！";
	string buf = "xyz";

	printf("ch=%c\n", ch);
	printf("str=%s\n", str);
	printf("buf=%s\n", buf.c_str());

	return 0;
}