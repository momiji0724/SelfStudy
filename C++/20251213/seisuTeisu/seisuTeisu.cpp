#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

int main(void)
{
	enum eCOLOR{RED=5,BLUE,GREEN,WHITE,BLACK};
	char ax[RED];
	int input;

	puts("5:Red 6:Blue 7:Green 8:White 9:Black");
	scanf("%d",&input);		/*キーボードからの入力*/

	switch(input)	
	{
		case RED:
			puts("RED");
			break;
		case BLUE:
			puts("Blue");
			break;
		case GREEN:
			puts("Green");
			break;
		case WHITE:
			puts("White");
			break;
		case BLACK:
			puts("Black");
			break;

	}

	return 0;
}
