#include <stdio.h>

int main() {
    int n, i;                 
    int marks[100];          
    int total = 0;            
    float average;            

    // Step 1: Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Step 2: Input marks of each student
    printf("Enter marks of %d students: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];   // Add each mark to total
    }

    // Step 3: Calculate average
    average = (float) total / n;

    // Step 4: Display results
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}