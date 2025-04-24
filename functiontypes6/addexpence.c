#include <stdio.h>
#include <stdlib.h>

struct Expense {
    char date[11];    // Format: DD-MM-YYYY
    char title[40];
    int amount;
    char category[30];
};

struct Expense e[50];
int expenseIndex = 0;  

void addExpense() {
    printf("\nEnter title, date, amount, category: ");

    scanf("%s %s %d %s", e[expenseIndex].title, e[expenseIndex].date, &e[expenseIndex].amount, e[expenseIndex].category);

    expenseIndex++;
}

void printExpense() {
    for (int i = 0; i < expenseIndex; i++) {
        printf("\n%s %s %d %s", e[i].title, e[i].date, e[i].amount, e[i].category);
    }
}

int main() {
    addExpense();
    addExpense();
    printExpense();
    return 0;
}