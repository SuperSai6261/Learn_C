#include <stdio.h>
#include <stdlib.h>

struct Queue {
  int size;
  int front;
  int rear;
  int *Q;
};

void Enqueue(struct Queue *q, int v) {
  if ((q->rear + 1) % q->size == q->front) {
    printf("Queue is full");
  } else {
    q->rear = (q->rear + 1) % q->size;
    q->Q[q->rear] = v;
  }
}

int Dequeue(struct Queue *q) {
  int x = -1;
  if (q->front == q->rear) {
    printf("Queue is empty");
  } else {
    q->front = (q->front + 1) % q->size;
    x = q->Q[q->front];
  }
  return x;
}

void Display(struct Queue q) {
  int i = q.front + 1;

  do {
    printf("%d ", q.Q[i]);
    i = (i + 1) % q.size;
  } while (i != (q.rear + 1) % q.size);

  printf("\n");
}

int main() {
  struct Queue q;

  printf("Enter the size of Queue: ");
  scanf("%d", &q.size);

  q.Q = (int *)malloc(q.size * sizeof(int));
  q.front = q.rear = 0;

  Enqueue(&q, 10);
  Enqueue(&q, 20);
  Enqueue(&q, 30);

  printf("Deleted = %d\n", Dequeue(&q));

  Enqueue(&q, 40);

  Display(q);
}
