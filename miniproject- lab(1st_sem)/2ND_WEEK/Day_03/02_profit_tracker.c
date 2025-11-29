#include <stdio.h>

int main() {
    int n, i;
    int profit = 0, loss = 0;

    // Input number of days
    printf("Enter number of days: ");
    scanf("%d", &n);

    int records[n];

    // Input profit/loss records
    printf("Enter daily profit/loss values: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &records[i]);
    }

    // Calculate total profit and total loss
    for (i = 0; i < n; i++) {
        if (records[i] > 0)
            profit += records[i];
        else if (records[i] < 0)
            loss += (-records[i]);  // convert negative to positive
    }

    int net_balance = profit - loss;

    // Output results
    printf("Total Profit: %d\n", profit);
    printf("Total Loss: %d\n", loss);
    printf("Net Balance: %d\n", net_balance);

    return 0;
}