/* Identify every single digit
input                output
123                 1  2  3 
321                 3  2  1*/

#include <stdio.h>

int main (){

	int x,a;
	scanf("%d", &x);
	
	while (x > 0)
	{
		a = x % 10;
		x = x / 10;
		printf("%d \n", a);

		/* 
		if (x == 0)
		{
			break;
		}
		*/
	}

	return 0;
}