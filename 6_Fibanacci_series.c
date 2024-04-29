#include <stdio.h>

int series(int n) {
    if (n <= 1){
        return n;
    }
    else{
        return series(n - 1) + series(n - 2);
    }
}

int main() {
    int n, i;

    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("\nFibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", series(i));
    }

    return 0;
}
