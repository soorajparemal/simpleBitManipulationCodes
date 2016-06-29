#include <stdio.h>
int main()
{
	int n;
	int m;
	scanf("%d%d", &n , &m);
	printf("%d\n" , n& ~(~0 << m));
}
