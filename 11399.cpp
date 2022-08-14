#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void) {
    int N = 0, index, sum = 0, wait = 0;
    cin >> N;

    vector<int> v;
    vector<int>::iterator iter;

    for(int i = 0; i < N; i++) {
        cin >> index;
        v.push_back(index);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        wait += v[i];
        sum += wait;
    }

    cout << sum << "\n";

}