#include <stdio.h> 
void decToBinary(int n) 
{ 
	
	int binaryNum[1000]; 
	int i = 0; 
	while (n > 0) { 

		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 
	int j;


	for ( j = i - 1; j >= 0; j--) 
		printf("%d", binaryNum[j]); 
} 


int main() 
{ 
	int n = 17; 
	decToBinary(n); 
	return 0; 
}
