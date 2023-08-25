#include <iostream>
#include <thread>
using namespace std;

void printMessage(char* message) {
    cout << message << endl;
}

void printNumbers(int start, int end) {
    for (int i = start; i <= end; ++i) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {

    char* message = "Hello from thread 1!";
    int startNum = 1;
    int endNum = 10;

    void (*messageFunction)(char*) = printMessage;
    void (*numbersFunction)(int, int) = printNumbers;

    thread thread1(messageFunction, message);
    thread thread2(numbersFunction, startNum, endNum);

    thread1.join();
    thread2.join();

    return 0;

}
