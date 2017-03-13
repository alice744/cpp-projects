#include <stdio.h>
#define N 5
int square(int x[], int y[], int i ) {
	float s;
	for (i = 0; i < N - 1; i++) {
		s = (x[i + 1] - x[i])*(y[i] + y[i + 1]) / 2;
	}
}

int main() {
	int x[N], y[N], i;
	float s1,so;
	for (i = 0; i < N; i++) {
		scanf_s("%d\n%d", &x[i], &y[i]);
		s1 = square (&x[i], &y[i],i);
		if (x[i] < x[i + 1])
			so += s1;
		else 
			so -= s1;
	}
	printf("%f", so);
	return 0;
}