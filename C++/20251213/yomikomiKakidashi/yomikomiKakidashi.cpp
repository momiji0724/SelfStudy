#define _CRT_SECURE_NO_DEPRECATE 1 /* VisualC++2005以降での警告抑制*/
#include <stdio.h>

int main()
{
	FILE* fp;

	fp = fopen("E:\\VantanGameAcademy\\Cplus_zen\\20251213\\test.txt", "w+");

	if(fp == NULL)
	{
		puts("test.txtが開けません");
		return 1;
	}
	/*　10 + 20 =30ですと書き込む　*/
	fprintf(fp, "%d %c %d = %d%s\n",
		10, '+', 20, 10 + 20, "です");

	return 0;
}

