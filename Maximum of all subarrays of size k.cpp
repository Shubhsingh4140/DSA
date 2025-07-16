#include <iostream>
#include <vector>
#include <list>
#include <climits>
using namespace std;

int main() {
    vector<int> v = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    int i = 0, j = 0;
    list<int> ls;        
    vector<int> answ;    
    int maxin=INT_MIN;
    ls.push_back(maxin);
    while (j < v.size()) {
           while (!ls.empty() && v[j] > ls.back()) {
            ls.pop_back();
        }
            ls.push_back(v[j]);
      

        if (j - i + 1 < k) {
            j++;
        }
        else if (j - i + 1 == k) {
                answ.push_back(ls.front());
                if (v[i] == ls.front()) {
                    ls.pop_front();  //
                }
            
            i++;
            j++;}
       
    }
    for(int x : answ) {
        cout << x << " ";
    }

    return 0;
}
