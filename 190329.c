#include<stdio.h>
int main(void)
{
	int a, b, sum = 0, i;
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
		sum += i;

	printf("%d", sum);
	return 0;
}