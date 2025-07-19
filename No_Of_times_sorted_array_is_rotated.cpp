/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int binarySearch(vector<int>& v,int low,int high ){
      int res=-1;
    while(low<=high){
        
        int mid=low+(high-low)/2;
        if(v[mid]<v[mid-1]&&v[mid]<v[mid+1]){
            res=mid;
            return res;
        }
        else if(v[mid]>v[low]){
           low=mid+1;
        }
        else{
            high=mid-1;
        }
        // return res;
    }
    
    return res;
}

int main()
{
    vector<int> v={15,18,2,5,6,8,11,12};
    int x=binarySearch(v,0,v.size());
    
    cout<<x;

    return 0;
}
