#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(void) {
	int N = 0, rightFlag, leftFlag;
	int flag;
	string index;
	stack<char> s;

	cin >> N;

	for (int i = 0; i < N; i++) {
		flag = 0;
		rightFlag = 0, leftFlag = 0;
		cin >> index;
		reverse(index.begin(), index.end());
		for (int j = 0; j < index.length(); j++) {
			s.push(index[j]);
		}
		

		for (int j = 0; j < index.length(); j++) {
			if (s.top() == '(') {
				flag += 1;
				rightFlag += 1;
				s.pop();
			}
			else if (s.top() == ')') {
				flag -= 1;
				leftFlag += 1;
				s.pop();
			}
			if (rightFlag < leftFlag) {
				flag = -1;
				break;
			}
		}
		if (flag == 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}