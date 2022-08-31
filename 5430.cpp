#include<iostream>
#include<deque>
#include<sstream>
#include<vector>
using namespace std;

int main(void) {
    deque<string> d;
    vector<char> v;
    vector<char>::iterator iter;
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        string func, numArr, index;
        int length = 0, Dcnt = 0;
        bool flag = false;

        cin >> func >> length >> numArr;

        numArr.erase(numArr.begin());
        numArr.pop_back();
        
        istringstream ss(numArr);
        v.clear();
        d.clear();

        for(int j = 0; j < func.length(); j++) {
            char temp = func[j];
            v.push_back(temp);
            if(func[j] == 'D')
                Dcnt++;
        }
        
        if(length < Dcnt) {
            cout << "error" << "\n";
        }else {

            while(getline(ss, index, ',')) {
                d.push_back(index);
            }

            iter = v.begin();

            for(int j = 0; j < v.size(); j++) {
                if(*iter == 'R') {
                    flag = !flag;
                    iter++;
                }else if(*iter == 'D'){
                    if(!flag) {
                        d.pop_front();
                        iter++;
                        }
                    else if(flag) {
                        d.pop_back();
                        iter++;
                        }
                }  
            }

            int dSize = d.size() - 1;
            cout << "[";
        
            for(int j = 0; j < d.size(); j++) {
                if(!flag) {
                    cout << d[j];
                }else if(flag) {
                    cout << d[dSize];
                    dSize--;
                }
            
                if(j != d.size() - 1)
                    cout << ",";
            }
            cout << "]" << "\n";
        }
    }
}