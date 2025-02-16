#include <stdio.h> 
void printDivisors(int n) 
{ 
int i;
	for ( i = 1; i <= n; i++) 
		if (n % i == 0) 
			printf("%d ", i); 
} 
int main() 
{ 
	printf("The divisors of 100 are: "); 
	printDivisors(100); 

	return 0; 
}

