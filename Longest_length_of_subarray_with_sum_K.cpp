#include <iostream>
#include <vector>
#include <list>
#include <climits>
using namespace std;

int main() {
    vector<int> v = {4,1,1,1,2,3,5};
    int k = 5;
    int i = 0, j = 0;
            
        int s=0;
        int maxLen=0;
    while (j < v.size()) {
        s=s+v[j];
        
        while(s>k&&i<=j){
                s=s-v[i];
                i++;
            }
        if(s==k){
            int lt=j-i+1;
            maxLen=max(maxLen,lt);
            
            
        }
        
            
            
        
    
            j++;
    
        
    }
         cout<<maxLen;

    return 0;
}
