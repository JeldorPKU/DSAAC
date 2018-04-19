#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int isPrime(int n) {
	int i, flag = 1;
	for (i = 2; i < sqrt(n); ++i) {
		if (n % i == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("%d\n", isPrime(n));
    return 0;
}

