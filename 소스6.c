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
	printf("입력\n");
	if ((q->rear + 1) % MAX_SIZE == q->front)
	{
		error("포화 상태\n");
	}
	q->rear = (q->rear + 1) % MAX_SIZE;
	q->queue[q -> rear] = item;
}

element dequeue(QueueType* q)
{
	printf("출력\n");
	if (q->front == q->rear)
	{
		error("공백 상태");
	}
	q->front = (q->front + 1) % MAX_SIZE;
	return q->queue[q->front];
}

int main(void)
{
	QueueType q[MAX_SIZE];
	int qValue;
	int a;

	initialize(q);
	while (1)
	{
		printf("1.입력 2.출력 3. 종료 : ");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			printf("Queue에 넣을 값 : ");
			scanf_s("%d", &qValue);
			enqueue(q, qValue);
			break;
		case 2:
			printf("%d\n", dequeue(q));
			break;
		case 3:
			exit(1);
		default:
			break;
		}
	}
	return 0;
}