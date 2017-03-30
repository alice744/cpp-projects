#include <stdio.h>
#include <math.h>
#define N 100
float square(float x[], float y[], int i, int length) {
	float s=0;
	if (i < length - 1)
		s = ((x[i + 1] - x[i])*(y[i] + y[i + 1]));
	else
		s = ((x[0]-x[i])*(y[0] + y[i]));
	return s;
}

int main() {
	 float x[N], y[N];
	 int i, length;
	float s1=0,so=0;
	printf("Enter count of points ");
	scanf_s("%d", &length);
	if (0 >= length || N < length) {
		return -1;
	}
	for (i=0;i<length;i++)
		scanf_s("%f\n%f", &x[i], &y[i]);
	for (i = 0; i < length; i++) 
	{
		so += square (x,y,i,length);
	}
	so = (float)(fabs(so*0.5));
	printf("%.2f\n", so);

	return 0;
}