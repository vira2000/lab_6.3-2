#include <iostream>

using namespace std;

template <typename T>
void fillArray(T* arr, int size)
{
    if (size > 0)
        fillArray(arr, size - 1);
    cout << size << " > ";
    cin >> arr[size];
}

template <typename T>
void printArray(T* arr, int size)
{
    if (size > 0)
        printArray(arr, size - 1);
    cout << arr[size] << " ";
}

template <typename T>
T sumOfNegativeElements(T* arr, int size)
{
    if (size == -1)
        return 0;

    if (arr[size] < 0)
        return arr[size] + sumOfNegativeElements(arr, size - 1);
    return sumOfNegativeElements(arr, size - 1);
}

int main()
{
    int n;

    cout << "N > ";
    cin >> n;

    int* arr = new int[n];

    fillArray(arr, n - 1);

    cout << "Array: ";
    printArray(arr, n - 1);
    cout << endl;

    cout << "Sum of negative elements: " << sumOfNegativeElements(arr, n - 1) << endl;

    return 0;
}