#include <stdio.h>

int main() {
  
    int n = 4;  
    int c = n * (n + 1) / 2;
    int i,j;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("%d ", c--);
        printf("\n");
    }

    return 0;
}
