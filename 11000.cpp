#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

vector<pair<int,int>> v;
priority_queue<int, vector<int>, greater<int>> q; //init greater queue;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, findex, sindex; 

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> findex >> sindex;
        v.push_back(make_pair(findex, sindex)); //push two values in vector
    }

    sort(v.begin(), v.end()); //sort by dictionary

    q.push(v[0].second); // init endtime in queue

    for(int i = 1; i < N; i++) {
        if(q.top() <= v[i].first) { //compare ascending top value and vector[i] value | if true -> No classroom required
            q.pop();
            q.push(v[i].second);// Sorted in ascending order in queue
        }else {
            q.push(v[i].second);// Sorted in ascending order in queue
        }
    }
    cout << q.size() << "\n";
}