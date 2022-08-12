/*#include <iostream>

using namespace std;

void blackJack(int N, int M) {
	if (N < 3 || N > 100) {
		cout << "ī�� ������ �ٽ� ���߼���" << endl;
		
	}
	else if (M < 10 || M > 300000) {
		cout << "ī���� ������ �ٽ� ���߼���" << endl;
		
	}

	int arr[100] = {0, };
	int max = 0, current = 0;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}


	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				current = arr[i] + arr[j] + arr[k];
				if (current <= M && current > max)
					max = current;
			}
		}
	}

	cout << max << endl;;
}




int main(void) {
	int N, M;
	cin >> N >> M;

	blackJack(N, M);
}*/