#include <stdio.h>

struct test
{
	int x;  /*メンバーx*/
	double y;	/*メンバーy*/
};


int main()
{
	struct test s;
	s.x = 10;
	s.y = 3.14;
	
	printf("s.x = %d\n", s.x);
	printf("s.y = %.2f\n", s.y);
	
	return 0;
}

