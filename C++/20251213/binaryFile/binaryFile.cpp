#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

int main()
{
	FILE* fp;
	char date[10000];	/*読み込みデータ格納用*/
	size_t size;	/*読み込めたデータサイズ*/
	size_t i;	/*ループで変数sizeと比較するので型を合わせる*/

	fp = fopen("E:\\VantanGameAcademy\\Cplus_zen\\20251213\\トマト.bmp","rb");	/*ビットマン*/
	if(fp == NULL)
	{
		puts("test.bmpが開けません");
		return 1;
			
	}

	size = fread(date, 1, 5000, fp); /*5000バイト分読み込む*/
	for(i=0;i<size; ++i)	/*実際に読み込めた分だけ繰り返す*/
	{
		printf(" % d", date[i]);	/*10進整数として表示*/

	}

	printf("\n");

	fclose(fp);
	return 0;
}
