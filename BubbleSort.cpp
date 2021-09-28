//BUBBLE SORT

#include <iostream>
#include <time.h>
#include <ctime>  
using namespace std;

void bubbleSort(int arr[], int num)
{
    if (num == 1)
        return;

    for (int i = 0; i < num - 1; i++)
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    
    bubbleSort(arr, num - 1);
}

void fillArrayWithValues(int* ptrToFill, int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        int randomInt = rand();
        ptrToFill[i] = randomInt;

    }
}

void printArray(int arr[], int num)
{
    for (int i = 0; i < num; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    clock_t startClock, finishClock;
    double timeCount;
    int num;
    cout << "Enter the size of array: ";
    cin >> num;
    int arr[num];
    fillArrayWithValues(arr, num);
    startClock = clock();
    bubbleSort(arr, num);
    finishClock = clock();
    timeCount = finishClock - startClock;
    printf("Sorted array : \n");
    printArray(arr, num);
    cout << "\nExecution time : " << timeCount / 100;
    return 0;
}
