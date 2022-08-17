#include<iostream>
#include<queue>
using namespace std;

int main(void) {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int N;
    queue<int> q;
    cin >> N;

    for(int i = 0; i < N; i++) {
        string func;
        int index;
        cin >> func;

        if(func == "push") {
            cin >> index;
            q.push(index);
        }else if(func == "pop") {
            if(q.empty()) {
                cout << "-1" << "\n";
            }else {
                cout << q.front() << "\n";
                q.pop();
            }
        }else if(func == "size") {
            cout << q.size() << "\n";
        }else if(func == "empty") {
            cout << q.empty() << "\n";
        }else if(func == "front") {
            if(q.empty()) {
                cout << "-1" << "\n";
            }else {
                cout << q.front() << "\n";
            }
        }else if(func == "back") {
            if(q.empty()){
                cout << "-1" << "\n";
            }else {
                cout << q.back() << "\n";
            }
        }
    }
}