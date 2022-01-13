#include <stdio.h>

int main()
{
	int alphabet;
	scanf("%c", &alphabet);
	
	int number;
	scanf("%d", &number);
	
	for (int i=1; i<=number; i++)
	{
		printf("%c %d\n" , alphabet, i );
	}
}
