#include <stdio.h>
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
	int x[N] = { 2,4,6,8,7 }, y[N] = {2,6,4,5,2}, i;
	float s1=0,so=0;
	for (i = 0; i < N; i++) 
	{
		s1 = square (x,y,i);
		if (x[i] < x[i + 1])

			so += s1;
		else 
			so -= s1;
	}
	printf("%f\n", so);
	return 0;
}
//scanf_s("%d\n%d", &x[i], &y[i]);