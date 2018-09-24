#include <stdio.h>
#include <math.h>

int main()
{
	float side;
	scanf("%f", &side);
	float sq = sqrtf(3);
	float area = side * side * sq /4;
	printf("%.3f", area);
}
