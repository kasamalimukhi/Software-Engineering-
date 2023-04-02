
#include <stdio.h>

// Driver code
int main()
{
	// We can change values here for
	// different inputs
	float P,R,T;
	printf("enter your value p,r and t \n");
	scanf("%f%f%f",&P,&R,&T);

	// Calculate simple interest
	float SI = (P * T * R) / 100;

	// Print Simple Interest
	printf("Simple Interest = %f\n", SI);

	return 0;
}


