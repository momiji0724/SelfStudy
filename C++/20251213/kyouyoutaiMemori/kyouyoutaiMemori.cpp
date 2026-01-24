#include <stdio.h>

union test
{
	int ax;		/*4byte*/
	double fx;		/*8byte*/
};

int main()
{
	union test obj;		/*8Byteの大きさの領域が確保*/

	obj.ax = 123;
	printf("obj.ax=%d\n", obj.ax);
	printf("obj.fx=%f\n", obj.fx);		/*ゴミが表示される*/

	obj.fx = 3.14;
	printf("obj.ax=%d\n", obj.ax);		/*ゴミが表示される*/
	printf("obj.fx=%f\n", obj.fx);


	return 0;
}

