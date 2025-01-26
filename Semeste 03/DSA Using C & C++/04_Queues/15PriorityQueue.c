#include <stdio.h>
#define MAX 100

typedef struct {
    int data;
    int priority;
} PriorityQueue;

PriorityQueue pq[MAX];
int size = 0;

void enqueue(int value, int priority) {
    if (size == MAX) {
        printf("Priority queue overflow.\n");
    } else {
        pq[size].data = value;
        pq[size].priority = priority;
        size++;
    }
}

void dequeue() {
    if (size == 0) {
        printf("Priority queue underflow.\n");
    } else {
        int highestPriority = 0;
        for (int i = 1; i < size; i++) {
            if (pq[i].priority > pq[highestPriority].priority) {
                highestPriority = i;
            }
        }
        printf("%d dequeued with priority %d.\n", pq[highestPriority].data, pq[highestPriority].priority);
        for (int i = highestPriority; i < size - 1; i++) {
            pq[i] = pq[i + 1];
        }
        size--;
    }
}

void display() {
    if (size == 0) {
        printf("Priority queue is empty.\n");
    } else {
        printf("Priority queue elements:\n");
        for (int i = 0; i < size; i++) {
            printf("%d (priority %d)\n", pq[i].data, pq[i].priority);
        }
    }
}

int main() {
    int choice, value, priority;
    do {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter value and priority: ");
            scanf("%d%d", &value, &priority);
            enqueue(value, priority);
            break;
        case 2:
            dequeue();
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
