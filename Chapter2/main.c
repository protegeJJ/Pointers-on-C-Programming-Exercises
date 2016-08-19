#include <stdio.h>

int increment(int value);
int negate(int value);

int main(int argc, char *argv[]) {
	int value1 = 10;
	int value2 = 1;
	int value3 = -10;

	printf("The increment of %d is %d and its negate is %d\n", value1, increment(value1), negate(value1));
	printf("The increment of %d is %d and its negate is %d\n", value2, increment(value2), negate(value2));
	printf("The increment of %d is %d and its negate is %d\n", value3, increment(value3), negate(value3));
	return 0;
}
