#include <iostream>
#include <vector>
#include <list>
#include <climits>
#include <bits/stdc++.h>
using namespace std;


int main() {
vector<int> nums;
nums.push_back(7);
nums.push_back(10);
nums.push_back(4);
nums.push_back(3);
nums.push_back(20);
nums.push_back(15);
int k=3;
priority_queue<int,vector<int>,greater<int>> maxHeap;
for(int i:nums){
    maxHeap.push(i);
    if(maxHeap.size()>k){
        maxHeap.pop();
    }
}
cout<<maxHeap.top();



    return 0;
}
