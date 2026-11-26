#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int recursiveMaximum(const int array[], int size);

int main(void)
{
    int data[SIZE] = { 14, 82, 37, 95, 21, 64, 88, 53, 99, 41 };

    printf("Array elements: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", data[i]);
    }

    int maxVal = recursiveMaximum(data, SIZE);
    printf("\nMaximum value in the array is: %d\n", maxVal);

    system("pause");
    return 0;
}

int recursiveMaximum(const int array[], int size)
{
    if (size == 1) // 陣列只剩一個元素時回傳該元素
    {
        return array[0];
    }

    int subMax = recursiveMaximum(array, size - 1);
    return (array[size - 1] > subMax) ? array[size - 1] : subMax;
}