#include <stdio.h>
//EXERCISE 4.19
int main() {
    int product_number = 0;
    int quantity = 0;
    double total_retail_value = 0.0;

    
    printf("        CAMPUS STORE RETAIL SYSTEM       \n");
    
    printf("Product 1: $2.98\n");
    printf("Product 2: $4.50\n");
    printf("Product 3: $9.98\n");
    printf("Product 4: $4.49\n");
    printf("Product 5: $6.87\n");
   

    printf("\nEnter product number (1-5, or -1 to exit): ");
    scanf("%d", &product_number);

  
    while (product_number != -1) {
        
        switch (product_number) {
            case 1:
                printf("Enter quantity sold: ");
                scanf("%d", &quantity);
                total_retail_value += quantity * 2.98;
                printf("  Added Product 1 ($2.98 x %d)\n", quantity);
                break;
            case 2:
                printf("Enter quantity sold: ");
                scanf("%d", &quantity);
                total_retail_value += quantity * 4.50;
                printf("  Added Product 2 ($4.50 x %d)\n", quantity);
                break;
            case 3:
                printf("Enter quantity sold: ");
                scanf("%d", &quantity);
                total_retail_value += quantity * 9.98;
                printf("  Added Product 3 ($9.98 x %d)\n", quantity);
                break;
            case 4:
                printf("Enter quantity sold: ");
                scanf("%d", &quantity);
                total_retail_value += quantity * 4.49;
                printf("  Added Product 4 ($4.49 x %d)\n", quantity);
                break;
            case 5:
                printf("Enter quantity sold: ");
                scanf("%d", &quantity);
                total_retail_value += quantity * 6.87;
                printf("  Added Product 5 ($6.87 x %d)\n", quantity);
                break;
            default:
                printf("  Invalid product number! Please enter 1-5, or -1 to quit.\n");
                break;
        }

        printf("\nEnter product number (1-5, or -1 to exit): ");
        scanf("%d", &product_number);
    }

    
    printf("Total retail value of all items sold: $%.2f\n", total_retail_value);
    printf("Checkout complete. Program terminating.\n");

    return 0;
}
