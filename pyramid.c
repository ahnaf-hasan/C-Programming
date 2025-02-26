//Let's Start
#include <stdio.h>

void printPyramid(int n) {
    int i, j, k;
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2*i-1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPyramid(n);
    return 0;
}
