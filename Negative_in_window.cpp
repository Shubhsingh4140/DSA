#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> v = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    int i = 0, j = 0;
    list<int> ls;        
    vector<int> answ;    

    while (j < v.size()) {
        if (v[j] < 0) {
            ls.push_back(v[j]);
        }

        if (j - i + 1 < k) {
            j++;
        }
        else if (j - i + 1 == k) {
            if (ls.empty()) {
                answ.push_back(0);
            } else {
                answ.push_back(ls.front());
                if (v[i] == ls.front()) {
                    ls.pop_front();  //
                }
            }
            i++;
            j++;
        }
    }

    for (int x : answ) {
        cout << x << " ";
    }

    return 0;
}
