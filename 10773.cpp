/*#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	int N, Num, sum	= 0;
	cin >> N;
	stack<int> s;

	for (int i = 0; i < N; i++) {
		cin >> Num;
		if (Num == 0) {
			s.pop();
		}
		else {
			s.push(Num);
		}
	}

	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}

	cout << sum << endl;

}*/
