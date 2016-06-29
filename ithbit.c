#include <stdio.h>
int main()
{
	int n;
	int i;
	scanf("%d%d" , &n ,&i);
	printf("%d \n" , (n >> i) & 1);
}
