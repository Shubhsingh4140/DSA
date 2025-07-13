// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string maxRes = "";

void solve(vector<int>&nums,int st,int k){
    string curr = "";
    for (int i : nums) curr += to_string(i);
    if (curr > maxRes) {
        maxRes = curr;
    }
    if(k==0||st==nums.size()-1){
      
        return;
    }
    int max=nums[st];
    for(int i=st+1;i<nums.size();i++){
        if(nums[i]>max){
            max=nums[i];
        }
        
    }
    if(max!=nums[st]){
      for(int i=st+1;i<nums.size();i++){
        if(nums[i]>nums[st]&&nums[i]==max){
            swap(nums[i],nums[st]);
            solve(nums,st+1,k-1);
            swap(nums[i],nums[st]);
        }
        
    }}
    else{
        
    solve(nums,st+1,k);
    }
    
}
int main() {
    // Write C++ code here
   vector<int> nums;
   nums.push_back(4);
    nums.push_back(5);
     nums.push_back(7);
      nums.push_back(7);
      solve(nums,0,4);
        cout<<maxRes;

    return 0;
}
