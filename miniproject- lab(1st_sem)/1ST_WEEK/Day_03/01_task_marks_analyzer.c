/* Question: The Student’s Marks Analyzer

💡 Problem Story:
A teacher wants to analyze the marks of her students in a test.
She asks you to write a program that stores the marks of n students and finds out:

The total marks obtained by all students.

The average marks of the class.

Can you help the teacher by writing the program?
Task:

Write a program that takes the number of students and their marks as input and calculates:

The total marks

The average marks

Input Format:

The first line contains one integer n — number of students.

The next line contains n integers — marks of each student.

📤 Output Format:

Print two lines:

First line: "Total Marks = <value>"

Second line: "Average Marks = <value>"
Example 1:

Input:
5
80 70 90 85 75

Output:
Total Marks = 400
Average Marks = 80.00 */

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
