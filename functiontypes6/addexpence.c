#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct Expense {
    char date[11];    // Format: DD-MM-YYYY
    char title[40];
    int amount;
    char category[30];
};

struct Expense e[50];
int expenseIndex = 0;  

void addExpense() {
    printf("\nEnter title, date, amount, category:  ");

    scanf("%s %s %d %s", e[expenseIndex].title, e[expenseIndex].date, &e[expenseIndex].amount, e[expenseIndex].category);

    expenseIndex++;
}

void printExpense() 
{
    for (int i = 0; i < expenseIndex; i++) {
        printf("\n%-10s %-12s %-6d %-10s", e[i].title, e[i].date, e[i].amount, e[i].category);
    }
}
void ExpenceBycategory()
{
     int i;
    int totalAmt = 0;
    int foodAmt = 0;
    for (i = 0; i < expenseIndex; i++)
    {
        totalAmt = totalAmt + e[i].amount;
        if (strcasecmp(e[i].category, "FOOD") == 0)
        {
            foodAmt = foodAmt + e[i].amount;
        }
    }   
    printf("\nTotal Expense : %d", totalAmt);
    printf("\nFood Expense : %d", foodAmt);

    int automobileamt = 0;
     printf("\nautomobile Expense : %d", automobileamt);
     for (i = 0; i < expenseIndex; i++)
    {
        totalAmt = totalAmt + e[i].amount;
        if (strcasecmp(e[i].category, "automobile") == 0)
        {
             automobileamt= automobileamt + e[i].amount;
        }
    }   
     printf("\n automobileamt Expense : %d", automobileamt);
}

int main() 
{
       int choice;

    while (1)
    {
        printf("\n0 For Exit\n1 For Add Expense\n2 For List\n3 For Category Wise Expense Sum \nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addExpense();
            break;
        case 2:
            printExpense();
            break;
        case 3:
            ExpenceBycategory();
            break;
        case 0:
            exit(0);

        default:
            break;
        }
    }

}