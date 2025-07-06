// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>& arr,int i ,int j,vector<vector<int>>& dp){
    if(i>=j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int mn=INT_MAX;
    for(int k=i;k<j;k++){
        int temp=solve(arr,i,k,dp)+solve(arr,k+1,j,dp)+arr[i-1]*arr[k]*arr[j];
        mn=min(temp,mn);
    }
    return dp[i][j]=mn;
}
       
        
    
int main() {
   vector<int> arr;
   arr.push_back(40);
   arr.push_back(20);
   arr.push_back(30);
   arr.push_back(10);
   arr.push_back(30);
   int n=arr.size();
    static vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    int x=solve(arr,1,4,dp);
    cout<<x;

    return 0;
}
