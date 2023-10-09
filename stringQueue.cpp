#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); 

    queue<string> taskQueue;

    for (int i = 0; i < N; i++) {
        string task;
        getline(cin, task);
        taskQueue.push(task);
    }

    if (!taskQueue.empty()) {
        cout << "Front Task: " << taskQueue.front() << endl;
        cout << "Rear Task: " << taskQueue.back() << endl;
    } else {
        cout << "Queue is empty." << endl;
    }

    return 0;
}
