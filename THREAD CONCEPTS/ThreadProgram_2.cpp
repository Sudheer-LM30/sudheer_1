#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::chrono;

void threadFunction(int threadId) {
    cout << "Thread " << threadId << " is running." << endl;
}

int main() {
    const int numThreads = 4;
    thread threads[numThreads];

    for (int i = 0; i < numThreads; ++i) {
        threads[i] = thread(threadFunction, i);
    }

    this_thread::sleep_for(seconds(1));
    cout << "Main thread is running." << endl;

    for (int i = 0; i < numThreads; ++i) {
        threads[i].join();
    }

    cout << "All threads have finished." << endl;

    return 0;
}
