// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    string s="aabaabaa";
    string ptr="aaba";
    unordered_map<char,int> mp;
    for(char ch:ptr){
        mp[ch]++;
    }
    int j=0;
    int i=0;
    int k=ptr.length();
int answ=0;
int count=mp.size();
   
    while(j<s.size()){
        if(mp.find(s[j])!=mp.end()){
            mp[s[j]]--;
            if(mp[s[j]]==0){
                count--;
            }
            
        }
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(count==0){
                answ++;
            }
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]++;
                  if (mp[s[i]] == 1) {
        count++;
    }
            }
     
            i++;
            j++;
        }
        
        
    }
    cout<<answ;
    

    return 0;
}
