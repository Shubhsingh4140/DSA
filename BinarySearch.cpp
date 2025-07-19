/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int binarySearch(vector<int>& v,int low,int high ,int key){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==key){
            return mid;
        }
        else if(v[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
        return -1;
}
int main()
{
    vector<int> v={1,2,3,4,4,4,4,4,5,6};
    int x=binarySearch(v,0,v.size(),4);
    cout<<x<<" ";

    return 0;
}
