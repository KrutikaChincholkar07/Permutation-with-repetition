#include <stdio.h>
#include <math.h>

int main() {
    int n, r;
    int result;

    // Taking input
    printf("Enter number of items (n): ");
    scanf("%d", &n);

    printf("Enter number of positions (r): ");
    scanf("%d", &r);

    // Permutation with repetition formula n^r
    result = pow(n, r);

    printf("Permutation with repetition = %d\n", result);

    return 0;
}
