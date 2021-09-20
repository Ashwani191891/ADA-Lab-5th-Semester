#include<iostream>
#include <time.h>
#include <ctime>    
using namespace std;

void Fb_Series(int num) {
    static int a = 0, b = 1, c;
    if (num > 0) {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
        Fb_Series(num - 1);
    }
}
int main() {
    clock_t startClock, finishClock;
    double timeCount;

    int num;
    cout << "Enter the limit of fabonacci series : ";
    cin >> num;
    cout << "Required Fibonacci Series : ";
    cout << "0 " << "1 ";
    startClock = clock();
    Fb_Series(num - 2);     
    finishClock = clock();
    timeCount = finishClock - startClock;
    cout << "\nRun time of algorithm for " <<num<< "elements : " << timeCount / 100;
    return 0;
}