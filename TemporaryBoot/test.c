#include<stdio.h>

int sum(int , int);
int square(int);

int main(){
	int a, b, c, d;
	a = 10, b = 20;
	c = sum(a, b);
	d = square(a);
	printf("Sum: %d, Pro: %d\n", c, d);
}
