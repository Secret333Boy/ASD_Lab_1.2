#include <stdio.h>
#include <math.h>

int main () {
	int n = 0;
	int c = 0;

	while(n <= 0){
		printf("Enter n: ");
		scanf("%d", &n);
	}

	double result = 1;
	for (int i = 1; i <= n; i++) {
		double sum = 0;
		for (int j = 1; j <= i; j++) {
			sum += j + sin(j);
			c += 3;
		}
		result *= sum / (i * i + 1);
		c += 4;
	}

	printf("Result: %.7f\n", result);
	printf("Operation counter: %d\n", c);

	system("pause");
	return 0;
}