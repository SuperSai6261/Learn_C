#include <stdio.h>
#include <stdlib.h>

struct Queue {
  int size;
  int front;
  int rear;
  int *Q;
};

void Enqueue(struct Queue *q, int v) {
  if (q->rear == q->size - 1) {
    printf("Queue Full");
  } else {
    q->rear++;
    q->Q[q->rear] = v;
  }
}

int Dequeue(struct Queue *q) {
  int x = -1;
  if (q->front == q->rear) {
    printf("Queue Empty");
  } else {
    q->front++;
    x = q->Q[q->front];
  }
  return x;
}

void Display(struct Queue *q) {
  for (int i = q->front + 1; i <= q->rear; i++) {
    printf("%d ", q->Q[i]);
  }
}

int main() {
  struct Queue q;
  printf("Enter size of Queue: ");
  scanf("%d", &q.size);
  q.Q = (int *)malloc(q.size * sizeof(int));
  q.rear = q.front = -1;

  Enqueue(&q, 5);
  Enqueue(&q, 10);
  Enqueue(&q, 15);
  Dequeue(&q);
  Display(&q);
}
