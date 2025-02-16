#include <stdio.h>

int main() {
    int n = 5;
    int c = 1;
    int i,j;
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", c++);
        }
        printf("\n");
    }
    return 0;
}
