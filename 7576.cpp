#include<iostream>
#include<queue>
#include<algorithm>

#define MAX 1001 // Max array value
using namespace std;

int arr[MAX][MAX] = {0, };
queue<pair<int,int>> q; // Queue that initialize Array with value of 1

int M, N, sum = 0;
int dirX[4] = {0, 0, -1, 1}; // Set direction X
int dirY[4] = {1, -1, 0, 0}; // Set direction Y
bool check(int modiX,int modiY) { // Check exceeding values
    return modiX >= 0 && modiY >= 0 && modiX < M && modiY < N;
}

void BFS() {
    while(!q.empty()) {
        int qX = q.front().first; // Init x value in queue
        int qY = q.front().second; // Init y value in queue
        q.pop(); // Delete queue value after initialization

        for(int i = 0; i < 4; i++) {
            int modifiedX = qX + dirX[i]; 
            int modifiedY = qY +  dirY[i];

            if(check(modifiedX, modifiedY) && arr[modifiedX][modifiedY] == 0) { // Check exceeded values and array value == 0
                arr[modifiedX][modifiedY] = arr[qX][qY] + 1; // Increased day
                q.push(make_pair(modifiedX, modifiedY)); // Init next value
            }
        }
    }
}


int main(void) {
    cin >> N >> M;

    for(int i = 0; i < M; i++) {
        for(int j =0; j < N; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 1) {
                q.push(make_pair(i, j)); // Init two values in queue
            }
        }
    }

    BFS(); // Start BFS function

    for(int i = 0; i < M; i++) {
        for(int j =0; j < N; j++) {
            if(arr[i][j] == 0) { // if the value of 0 is in array
                cout << "-1";
                return 0;
                }
            if(sum < arr[i][j]) // Sum = Increased day by BFS function
                sum = arr[i][j];
        }
    }
    
    cout << sum - 1;
}