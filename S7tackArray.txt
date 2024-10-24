//Stack using Array
#include<stdio.h>
#include<conio.h>

#define size 5

int stack[size], top = -1, n, i;

void push() {
    if (top == size - 1) {
        printf("Stack is full\n");
    } else {
        top++;
        printf("\nEnter data: ");
        scanf("%d", &n);
        stack[top] = n;
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Deleted item = %d\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Peek element = %d\n", stack[top]);
    }
}

void main() {
    int ch;
    clrscr();

    do {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("5. Peek element\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                // Exit the loop
                printf("Exiting program...\n");
                break;
            case 5:
                peek();
                break;
            default:
                printf("Invalid choice! Please choose between 1-5.\n");
        }
    } while (ch != 4);  // Exit the loop if the user chooses option 4
    
    getch();  // Holds the console screen, requires conio.h
}
