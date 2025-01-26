#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue overflow.\n");
    } else {
        if (front == -1) front = 0;
        queue[++rear] = value;
    }
}

void reverseQueue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        int start = front, end = rear, temp;
        while (start < end) {
            temp = queue[start];
            queue[start] = queue[end];
            queue[end] = temp;
            start++;
            end--;
        }
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    do {
        printf("1. Enqueue\n2. Reverse\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            reverseQueue();
            printf("Queue reversed.\n");
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0;
}
