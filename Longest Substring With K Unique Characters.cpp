#include <iostream>
#include <vector>
#include <list>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

int main() {
   string s="aabacbebebe";
   int k=3;
   int j=0;
   int i=0;
   int maxLen=0;
   unordered_map<char,int> mp;
   while(j<s.length()){
       mp[s[j]]++;
       if(mp.size()<k){
            j++;
       }
       else if(mp.size()==k){
           int l=j-i+1;
           maxLen=max(maxLen,l);
           j++;
       }
       else if(mp.size()>k){
           while(mp.size()>k){
               mp[s[i]]--;
              if(mp[s[i]]==0){
                  mp.erase(s[i]);
              }
              
               i++;
               
           }
           j++;
       }
       
   }
   cout<<maxLen;

    return 0;
}
