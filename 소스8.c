#include <stdio.h>

void SelectionSort()//선택정렬
{
    int arr[5] = { 12, 7, 4, 1, 9 };
    int min;
    int index, temp;
    for (int i = 0; i < 5; i++) 
    {
        min = 100;
        for (int j = i; j < 5; j++) 
        {
            if (arr[j] < min) 
            {
                min = arr[j];
                index = j;
            }
        }
        temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < 5; i++) 
    {
        printf("%d\n", arr[i]);
    }
}

void BubbleSort()//버블정렬
{
    int arr[5] = { 9, 4, 13, 6, 2 };
    int temp;

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 4 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main() 
{
    SelectionSort();
    BubbleSort();
    return 0;
}