#include <stdio.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    stack[++top] = value;
}

int pop() {
    return stack[top--];
}

int evaluatePostfix(char postfix[]) {
    int i = 0, op1, op2, result;
    while (postfix[i] != '\0') {
        if (isdigit(postfix[i])) {
            push(postfix[i] - '0');
        } else {
            op2 = pop();
            op1 = pop();
            switch (postfix[i]) {
            case '+': result = op1 + op2; break;
            case '-': result = op1 - op2; break;
            case '*': result = op1 * op2; break;
            case '/': result = op1 / op2; break;
            }
            push(result);
        }
        i++;
    }
    return pop();
}

int main() {
    char postfix[MAX];
    printf("Enter a postfix expression: ");
    scanf("%s", postfix);
    printf("Result of evaluation: %d\n", evaluatePostfix(postfix));
    return 0;
}
