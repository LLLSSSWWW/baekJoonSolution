#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

vector<pair<int,int>> v;
priority_queue<int, vector<int>, greater<int>> q; //Init greater queue;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, findex, sindex; 

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> findex >> sindex;
        v.push_back(make_pair(findex, sindex)); //Push two values in vector
    }

    sort(v.begin(), v.end()); //Sort by dictionary

    q.push(v[0].second); // Init endtime in queue

    for(int i = 1; i < N; i++) {
        if(q.top() <= v[i].first) { //Compare ascending top value and vector[i] value | if true -> No classroom required
            q.pop();
            q.push(v[i].second);// Sorted in ascending order in queue
        }else { // False -> Required classroom
            q.push(v[i].second);// Don't pop and sorted in ascending order in queue
        }
    }
    cout << q.size() << "\n"; // Print number of classroom
}