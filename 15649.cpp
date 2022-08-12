/*#include<iostream>
#define MAX 9
using namespace std;

int N, M;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };

void DFS(int depth) {
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[depth] = i;
			DFS(depth + 1);
			visited[i] = false;
		}
	}
}
int main(void) {
	cin >> N >> M;
	DFS(0);
}*/