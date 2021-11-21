#include <stdio.h>

#define MAX 15
#define ROW 3
#define NUM_ITEM 7

FILE *myFile;

void main ()
{
    // Open the text file for reading.
    myFile = fopen("data.txt", "r");

    // Variable declaration
    int arr[MAX][ROW]; // 2D-array

    // 1D-array variables to keep the price for each transaction,
    // total sale based on the transaction ID, and total sale based on product ID
    float price[MAX], saleTransID[MAX], saleProductID[NUM_ITEM];

    int menu, i, j;

    // Function call to read data from a text file.
    //2D array variable must be the parameter to be used for reading the text file data.
    // Question 2 (a)

    // Main menu of the program using do-while & switch-case
    do{

    printf("\nMenu");
    printf("\n____");
    printf("\nl: Display content in 2D array");
    printf("\n2: Calculate price for each item bought 2D array");
    printf("\n3: Calculate total price group by transaction ID");
    printf("\n4: Calculate total price group by product ID");
    printf("\nSelect menu option: ");
    scanf("%d", &menu);

    switch(menu){
    case 1: // Function call to calculate the sale for each transaction
            // A 2D-array must be used to bring the text file data that has been read.
            // A 1D array must be used to bring back the price for each transaction.
            // Question 2(b)

            // Display result
            printf("Transaction ID\t Item ID\t Quantity\t Price");
            for (i=0; i<MAX; i++)
            {
                for (j=0; j<ROW; j++)
                {
                    printf("\t%d", arr[i][j]);
                }
                printf("\t \t %.2f", price[i]);
                printf("\n");
            } //for i j
            break;

    case 2: // Function call to calculate total sale based on the transaction ID.
            // A 2D-array must be used to bring the text files data that has been read.
            // A ID-array must be used to bring back the total amount of price based on the transactionID.
            // Question 2(c)

            // Display result
            for(i=0; i<sizeof(saleTransID); i++)
                printf("Transaction %i = RM %.2f", i, saleTransID[i]);
            break;

    case 3: // Function call to calculate the total sale for each product based on the Product ID.
            // A 1D-array must be used to bring back the total sale of the product based on the item ID.
            // Question 2(d)

            // Display result
            for(i=0; i<sizeof(saleProductID); i++)
                printf ("Item 1%i = RM %.2f", i, saleProductID[i]);
            break;

    case 4: printf("Total sale is RM%.2f", // Question 2(e) );

            // This is a function call to calculate the total sale of the day.
            // The result of the function call will be displayed in-line to the printf statement.
            // This function call must utilized the existing data from the array variables.
            break;

    case 0: break;
    default: printf("\n Wrong selection");
    }
 } while (menu != 0);
} //main
