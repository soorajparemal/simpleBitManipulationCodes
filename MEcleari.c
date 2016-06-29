#include <stdio.h>
int main()
{
	int n;
	int i;
	scanf("%d%d", &n , &i);
	printf("%d\n" , n& ~(1<<i) );
}
