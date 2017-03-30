#include <stdio.h>
#include "stdafx.h"
#define N 3

int main()
{
	char a[N];
	char b[N];
	int i, count = 0;
	char c, l;
	for (i = 0; i < N; i++)
	{
		scanf_s("%c\n", &a[i]);
		scanf_s("%c", &b[i]);
	}
	for (i = 0; i < N; i++) {
		if ((a[i] != b[i]) && (a[i] == 'A')) {
			count += i;
		}
		
	}
	if (count == 0) {
		printf("No");
	}


	printf("%d", count);

	return 0;
}