#include <stdio.h>
#include <stdbool.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

bool isBalanced(char expr[]) {
    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            push(expr[i]);
        } else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if (top == -1) return false;
            char popped = pop();
            if ((expr[i] == ')' && popped != '(') ||
                (expr[i] == '}' && popped != '{') ||
                (expr[i] == ']' && popped != '[')) {
                return false;
            }
        }
    }
    return top == -1;
}

int main() {
    char expr[MAX];
    printf("Enter an expression with parentheses: ");
    scanf("%s", expr);
    if (isBalanced(expr)) {
        printf("Parentheses are balanced.\n");
    } else {
        printf("Parentheses are not balanced.\n");
    }
    return 0;
}
