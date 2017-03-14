#include <stdio.h>
#include <math.h>
#define N 5
float square(int x[], int y[], int i ) {
	float s=0;
	if (i<N-1)
		s = (float)((x[i + 1] - x[i])*(y[i] + y[i + 1])) / 2;
	else
		s = (float)((x[i] - x[0])*(y[0] + y[i])) / 2;
	return s;
}

int main() {
	int x[N], y[N], i;
	float s1=0,so=0;
	for (i=0;i<N;i++)
		scanf_s("%d\n%d", &x[i], &y[i]);
	for (i = 0; i < N; i++) 
	{
		s1 = square (x,y,i);
		if (x[i] < x[i + 1])

			so += s1;
		else 
			so -= fabs(s1);
	}
	for (i = 0; i < N; i++)
		printf("%d\n", x[i]);
	printf("%.2f\n", so);

	return 0;
}