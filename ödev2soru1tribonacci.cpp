#include <stdio.h>

int main() {
    int n, i;
    int tribonacci[1000]; 
    
    printf("Kaçýncý terime kadar görmek istiyorsununz: ");
    scanf("%d", &n);
    
    tribonacci[1] = tribonacci[2] = 1; 
    tribonacci[0] = 0; 
    
    for (i = 3; i < n; i++) {
        tribonacci[i] = tribonacci[i-1] + tribonacci[i-2] + tribonacci[i-3];
    }
    
    printf(" %d. terime kadar olan tribonacci dizisi :\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", tribonacci[i]);
    }
    printf("\n");
    printf("%d",tribonacci[n]);
    
    return 0;
}

