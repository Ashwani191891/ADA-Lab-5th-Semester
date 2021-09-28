
//INSERTION SORT


#include <iostream>
#include <time.h>
#include <ctime>  
using namespace std;

void insertionSort(int srt[], int num)
{
    if (num <= 1)
        return;

    insertionSort(srt, num - 1);

    int last = srt[num - 1];
    int a = num - 2;

    while (a >= 0 && srt[a] > last)
    {
        srt[a + 1] = srt[a];
        a--;
    }
    srt[a + 1] = last;
}

void fillArrayWithValue(int* ptrToFill, int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        int randomInt = rand();
        ptrToFill[i] = randomInt;

    }
}

void printArray(int srt[], int num)
{
    for (int i = 0; i < num; i++)
        printf("%d ", srt[i]);
    printf("\n");
}

int main()
{
    clock_t startClock, finishClock;
    double timeCount;
    int num;
    cout << "Enter the size of array: ";
    cin >> num;
    int srt[num];
    fillArrayWithValue(srt, num);
    startClock = clock();
    insertionSort(srt, num);
    finishClock = clock();
    timeCount = finishClock - startClock;
    printf("Sorted array : \n");
    printArray(srt, num);
    cout << "\nExecution time : " << timeCount / 100;
    return 0;
}
