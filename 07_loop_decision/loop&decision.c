#include <stdio.h>

int main() {
    int num_employees = 0;
    double hours = 0.0;
    double rate = 0.0;
    int overtime_count = 0;

    printf("Enter total number of employees to process: ");
    if (scanf("%d", &num_employees) != 1 || num_employees <= 0) {
        printf("Invalid employee count. Program exiting.\n");
        return 0;
    }

    for (int i = 1; i <= num_employees; i++) {
        printf("\nEmployee %d:\n", i);
        printf("  Enter hours worked: ");
        scanf("%lf", &hours);
        printf("  Enter hourly rate ($): ");
        scanf("%lf", &rate);

        double gross_pay = 0.0;

        
        if (hours > 40.0) {
            double regular_pay = 40.0 * rate;
            double overtime_pay = (hours - 40.0) * rate * 1.5;
            gross_pay = regular_pay + overtime_pay;
            overtime_count++;
            printf("  Status: Eligible for Overtime Pay (1.5x rate)\n");
        } else {
            gross_pay = hours * rate;
            printf("  Status: Regular Pay\n");
        }

        printf("  Gross Pay: $%.2f\n", gross_pay);
    }

    
    printf("Total employees processed: %d\n", num_employees);
    printf("Employees with overtime:  %d\n", overtime_count);

    return 0;
}
