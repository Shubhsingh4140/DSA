// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
 int countSubset(vector<int>& nums,int sum){
        int n=nums.size();
        int  dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0){
                    dp[i][j]=0;
                }
                if(j==0){
                    dp[i][j]=1;
                }
            }
        }
          for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
               
            }
        }
        return dp[n][sum];


    }


    
   


int main() {
    // Sample input
   
    
    vector<int> values = {1,5,11,5};

    int no = countSubset( values,11);

    cout << "No of Subsets with given sum: " << no << endl;
    return 0;
}
