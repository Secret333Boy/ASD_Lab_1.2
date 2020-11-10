#include <stdio.h>
#include <math.h>

int main () {
	int n = 0;
	int c = 0;

	while(n <= 0){
		printf("Enter n (>0): ");
		scanf("%d", &n);
	}

	double result = 1;

	double Z = 0;
	double D = 0;
	
	for (int i = 1; i <= n; i++){
		Z += i + sin(i);
		c += 3;
		D = i * i + 1;
		c += 2;
		result *= Z / D;
		c += 2;
	}

	printf("Result: %.7f\n", result);
	printf("Operation counter: %d\n", c);

	system("pause");
	return 0;
}