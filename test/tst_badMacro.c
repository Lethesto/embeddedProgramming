#include <stdio.h>

#define SQUARE(x) (x*x)

int main(){

	int y = 2;

	int x = SQUARE(y++); //Gets replced with [ int x = (y++ * y++); ] VERY BAD so be careful!

	printf("x = %i\n", x);
	printf("y = %i\n\n", y);


	int a = 2;
	int b = 4;
	int c = (a++ * b);
	printf("a = %i\nb = %i\nc = %i\n\n", a,b,c);

	a = 2;
	c = (a * b++);
	printf("a = %i\nb = %i\nc = %i\n\n", a,b,c);

	return 0;
}