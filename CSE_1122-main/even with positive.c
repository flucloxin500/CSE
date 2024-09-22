#include <stdio.h>

int main (){

	int x, i = 1, count = 0;

	while ( i <= 5)
	{
		scanf("%d", &x);
		if( x % 2 == 0 && x>0)
		{
			count++;
		}

		i++;
	}
	printf("%d valores pares\n", count);

	return 0;
}