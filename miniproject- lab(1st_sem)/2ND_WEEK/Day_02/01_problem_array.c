#include <stdio.h>

int main() {
    int n;
    
    // Read number of days
    scanf("%d", &n);
    
    int arr[n];
    
    // Read exercise times
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Print in reverse order
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}


