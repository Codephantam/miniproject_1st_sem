#include <stdio.h>

int main() {
    int n, i;
    int present = 0, absent = 0;

    // Input number of students
    printf("Enter total number of students: ");
    scanf("%d", &n);

    int attendance[n];

    // Input attendance record
    printf("Enter attendance (0 for absent, 1 for present): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &attendance[i]);
    }

    // Count present and absent students
    for (i = 0; i < n; i++) {
        if (attendance[i] == 1)
            present++;
        else if (attendance[i] == 0)
            absent++;
    }

    // Output results
    printf("Present: %d\n", present);
    printf("Absent: %d\n", absent);

    return 0;
}