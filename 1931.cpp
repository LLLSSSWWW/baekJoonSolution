#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {
   int N = 0, findex = 0, sindex = 0, cnt = 1;
   cin >> N;
   vector<pair<int, int>> v;

   for(int i = 0; i < N; i++) {
      cin >> findex >> sindex;
      v.push_back(make_pair(sindex, findex));
   }

   sort(v.begin(), v.end());

   int init = v[0].first;

   for(int i = 1; i < v.size(); i++) {
      if(init <= v[i].second) {
         cnt++;
         init = v[i].first;
      }
   }
   cout << cnt << "\n";
}



