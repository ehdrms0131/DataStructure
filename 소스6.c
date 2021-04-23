#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 8

typedef int element;

typedef struct
{
	element queue[MAX_SIZE];
	int front, rear;
}QueueType;

void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void initialize(QueueType* q)
{
	q->front = q->rear = 0;
}

void enqueue(QueueType* q, element item)
{
	printf("�Է�\n");
	if ((q->rear + 1) % MAX_SIZE == q->front)
	{
		error("��ȭ ����\n");
	}
	q->rear = (q->rear + 1) % MAX_SIZE;
	q->queue[q -> rear] = item;
}

element dequeue(QueueType* q)
{
	printf("���\n");
	if (q->front == q->rear)
	{
		error("���� ����");
	}
	q->front = (q->front + 1) % MAX_SIZE;
	return q->queue[q->front];
}

int main(void)
{
	QueueType* q = MAX_SIZE;
	enqueue(q,1);

	dequeue(q,1);
}