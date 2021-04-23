#include <stdio.h>
#define STACK_SIZE 5

typedef int element;
element stack[STACK_SIZE];
int top = -1;

void Push(element item)
{
	//scanf_s("%d", top);
	if (top >= STACK_SIZE - 1)
	{
		printf("FULL\n");
		return;
	}
	else stack[++top] = item;
}
element Pop()
{
	if (top == -1)
	{
		printf("EMPTY\n");
		return;
	}
	else
	{
		return stack[top--];
	}
}
int main()
{
	int a = 0;
	int val;
	printf("�����ϿϷ�\n");
	while (1)
	{
		printf("0.end 1.push 2.pop 3.print : ");
		scanf_s("%d",&a);
		switch (a)
		{
		case 0:
			printf("����");
			return 0;
			break;
		case 1:
			printf("���� ���� �Է��ϼ��� : ");
			scanf_s("%d", &val);
			Push(val);
			break;
		case 2:
			printf("���� ���� ���ϴ�\n");
			for (int i = 0; i <= top; i++)
			{
				Pop();
				printf("%d \n", stack[i]);
			}
			break;
		case 3:
			if (top == -1)
			{
				printf("EMPTY\n");
			}
			else
			{
				printf("���� ��:%d\n", Pop());
			}
			break;
		}
	}
	//push(1);
	//push(3);
	//push(5);
	//pop();
	//push(7);
	//printf("%d ", pop());
	//printf("%d ", pop());
	//printf("%d ", pop());
	return 0;
}

//element peek()
//{
//	printf("%d", top);
//
//	if (top == -1)
//	{
//		printf("EMPTY\n");
//		return;
//	}
//	else return stack[top];
//
//	return top;
//}