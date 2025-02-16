#include <stdbool.h>
#include <stdio.h>
int main()
 {
    int n = 29;
	int c = 0;
	int i;
    if (n <= 1)
        printf("%d is NOT prime\n", n);
    else {
        for( i = 1; i <= n; i++) 
		{
		     if (n % i == 0)
            	c++;
        }

       		 if (c> 2)
            	printf("%d is NOT prime\n", n);

       
       		 else
            	printf("%d is prime", n);
    }

    return 0;
}
