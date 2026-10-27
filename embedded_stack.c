#include <stdio.h>
#include <string.h>

#define MAX 10
#define SIZE 50

char stack[MAX][SIZE];
int top = -1;

void push()
{
    char command[SIZE];

    if (top == MAX - 1)
    {
        printf("\nStack Overflow! History is full.\n");
        return;
    }

    printf("Enter command: ");
    scanf(" %49[^\n]", command);

    top++;
    strcpy(stack[top], command);

    printf("Command pushed successfully!\n");
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack Underflow! No command to remove.\n");
        return;
    }

    printf("\nPopped command: %s\n", stack[top]);
    top--;
}

void peek()
{
    if (top == -1)
    {
        printf("\nStack is empty.\n");
        return;
    }

    printf("\nLatest command: %s\n", stack[top]);
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("\nCommand history is empty.\n");
        return;
    }

    printf("\n===== COMMAND HISTORY =====\n");

    for (i = top; i >= 0; i--)
    {
        printf("%d. %s\n", top - i + 1, stack[i]);
    }
}

void search()
{
    char command[SIZE];
    int i, found = 0;

    printf("Enter command to search: ");
    scanf(" %49[^\n]", command);

    for (i = top; i >= 0; i--)
    {
        if (strcmp(stack[i], command) == 0)
        {
            printf("Command found: %s\n", stack[i]);
            printf("Position from top: %d\n", top - i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Command not found in history.\n");
    }
}

void clearHistory()
{
    top = -1;
    printf("\nAll command history cleared.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== EMBEDDED COMMAND HISTORY =====\n");
        printf("1. Push Command\n");
        printf("2. Pop Command\n");
        printf("3. Peek Latest Command\n");
        printf("4. Display History\n");
        printf("5. Search Command\n");
        printf("6. Clear History\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            return 1;
        }

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                search();
                break;

            case 6:
                clearHistory();
                break;

            case 0:
                printf("\nProgram terminated.\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
