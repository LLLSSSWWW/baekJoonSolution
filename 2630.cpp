#include<iostream>

#define MAX 128
using namespace std;
int arr[MAX][MAX] = { 2, };
int whiteCount = 0, blueCount = 0;

void recur(int x, int y, int size) {
	bool white = true, blue = true;

	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (arr[i][j] == 1)
				white = false;
			if (arr[i][j] == 0) 
				blue = false;
		}
	}

	if (white == true) {
		whiteCount++;
		return;
	}
	if (blue == true) {
		blueCount++;
		return;
	}//asdfasdfasdfasdfasdf

	recur(x, y, size / 2);
	recur(x, y + size / 2, size / 2);
	recur(x + size / 2, y, size / 2);
	recur(x + size / 2, y + size / 2, size / 2);
}

int main(void) {
	int N = 0;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	recur(0, 0, N);

	cout << whiteCount << endl << blueCount << endl;

}