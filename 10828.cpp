/*#include <iostream>

using namespace std;

int stack[10000];
int cur = -1;

int empty() {
	if (cur < 0)
		return 1;
	else
		return 0;
}

void push(int index) {
	cur++;
	stack[cur] = index;
}

void pop() {
	if (empty() == 1) {
		cout << -1 << endl;;
	}
	else {
		cout << stack[cur] << endl;
		cur--;
	}
}

void size() {
	cout << cur + 1 << endl;
}

void top() {
	if (empty() == 0)
		cout << stack[cur] << endl;
	else
		cout << -1 << endl;
}

int main(void) {
	int N, index;
	string command;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			cin >> index;
			push(index);
		}
		else if (command == "pop") {
			pop();
		}
		else if (command == "size") {
			size();
		}
		else if (command == "empty") {
			cout << empty() << endl;
		}
		else if (command == "top") {
			top();
		}
	}
}*/