// pattern: Alphabets
#include <stdio.h>

int main()
{
	int i,j;
	char n = 'A';

	// outer loop to print all rows
	for (i = 0; i <=4; i++) {

		// innter loop to print abphabet in each row
		for (j = 0; j <= i; j++) {
			printf("%c ", n++);
		}
		printf("\n");
	}
	return 0;
}

