#include <stdio.h>
#define MAX 5

int queue[MAX], front = 0, rear = 0;

void enqueue(int val) {
    if (rear == MAX) printf("Queue Full\n");
    else queue[rear++] = val;
}

void dequeue() {
    if (front == rear) printf("Queue Empty\n");
    else printf("Dequeued: %d\n", queue[front++]);
}

int main() {
    enqueue(100);
    enqueue(200);
    dequeue(); // Removes 100
    return 0;
}
