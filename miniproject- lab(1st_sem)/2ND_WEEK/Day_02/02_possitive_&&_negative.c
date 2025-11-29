#include <stdio.h>

int main() {
    int n;
    
    // Input number of readings
    scanf("%d", &n);
    
    int readings[n];
    
    // Input all temperature readings
    for(int i = 0; i < n; i++) {
        scanf("%d", &readings[i]);
    }
    
    int positive = 0, negative = 0, zero = 0;
    
    // Count positive, negative, and zero readings
    for(int i = 0; i < n; i++) {
        if(readings[i] > 0)
            positive++;
        else if(readings[i] < 0)
            negative++;
        else
            zero++;
    }
    
    // Output the results
    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d\n", zero);
    
    return 0;
}