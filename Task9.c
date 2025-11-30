#include <stdio.h>

int linearSearch(int array[], int size, int target, int index)
{
    if (index >= size)
    {
        return -1;
    }
    
    if (array[index] == target)
    {
        return index;
    }
    return linearSearch(array, size, target, index + 1);
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = linearSearch(array, n, target, 0);

    if (result != -1)
    {
        printf("Element %d found at index %d\n", target, result);
    }
    else
    {
        printf("Element %d not found in the array\n", target);
    }
    return 0;
}
