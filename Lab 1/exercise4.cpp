#include <stdio.h>

int Square(int x);
int Cube(int x);

int main(void) {
	
	int val;
	
	printf("Input Value : ");
	scanf("%d", &val);
	
	printf("Square : %d\n", Square(val));
	printf("Cube   : %d\n", Cube(val));

	return 0;
}

int Square(int x)
{
	return x * x;
}

int Cube(int x)
{
	return x * x * x;
}
