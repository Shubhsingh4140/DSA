// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int knapsack01(int n, int W, vector<int>& weights,vector<int>& values){
    vector<vector<int>> t(n+1,vector<int>(W+1,0));
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
            if(weights[i-1]<=j){
                t[i][j]=max(values[i-1]+t[i-1][j-weights[i-1]],
                t[i-1][j]);
                
                
            }
            else{
                t[i][j]=t[i-1][j];
            }
            
        }
    }
   return t[n][W];
    
    
}


int main() {
    // Sample input
    int n = 4;
    int W = 5;
    vector<int> weights = {1, 2, 3, 2};
    vector<int> values = {8, 4, 0, 5};

    int maxValue = knapsack01(n, W, weights, values);

    cout << "Maximum value that can be carried in the knapsack: " << maxValue << endl;
    return 0;
}
