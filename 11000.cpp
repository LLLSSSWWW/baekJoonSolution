#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

vector<pair<int,int>> v;
priority_queue<int, vector<int>, greater<int>> q;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, findex, sindex;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> findex >> sindex;
        v.push_back(make_pair(findex, sindex));
    }

    sort(v.begin(), v.end());

    q.push(v[0].second);

    for(int i = 1; i < N; i++) {
        if(q.top() <= v[i].first) {
            q.pop();
            q.push(v[i].second);
        }else {
            q.push(v[i].second);
        }
    }
    cout << q.size() << "\n";
}