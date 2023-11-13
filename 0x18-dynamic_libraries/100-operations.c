#include <stdio.h>

int add(int k, int m) {
	return k + m;
}

int sub(int k, int m) {
	return k - m;
}

int mul(int k, int m) {
	return k * m;
}

int div(int k, int m) {
	if (m == 0) {
		printf("Error: Division by zero\n");
		return 0;
	}
	return k / m;
}

int mod(int k, int m) {
	if (m == 0) {
		printf("Error: Division by zero\n");
		return 0;
	}
	return k % m;
}
