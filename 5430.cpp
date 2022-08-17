#include<iostream>
#include<deque>
#include<sstream>
using namespace std;

int main(void) {
    deque<string> d;
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        string func, numArr, index;
        int length = 0, Rcnt =0, Dcnt = 0;
        bool flag = true;
        cin >> func >> length >> numArr;
        numArr.erase(numArr.begin());
        numArr.pop_back();
        istringstream ss(numArr);

        for(int j = 0; j < func.length(); j++) {
            if(func[j] == 'R') {
                Rcnt++;
            }else if(func[j] == 'D') {
                Dcnt++;
            }
        }
        
        if(length < Dcnt) {
            cout << "error" << "\n";
        }else {

            while(getline(ss, index, ',')) {
                d.push_back(index);
            }

            if(Rcnt % 2 == 0) {
                flag = true;
            }else {
                flag = false;
            }

            for(int j = 0; j < Dcnt; j++) {
                if(flag)
                    d.pop_front();
                else if(!flag)
                    d.pop_back();
            }

            int dSize = d.size() - 1;
            cout << "[";
        
            for(int j = 0; j < d.size(); j++) {
                if(flag) {
                    cout << d[j];
                }else if(!flag) {
                    cout << d[dSize];
                    dSize--;
                }
            
                if(j != d.size() - 1)
                    cout << ",";
            }
            cout << "]" << "\n";
            d.clear();
        }
    }
}