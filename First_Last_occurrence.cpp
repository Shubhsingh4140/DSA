/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int binarySearchLastOccurrence(vector<int>& v,int low,int high ,int key){
        int res=-1;
    while(low<=high){
        
        int mid=low+(high-low)/2;
        if(v[mid]==key){
            res=mid;
            low=mid+1;
        }
        else if(v[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        // return res;
    }
    
    return res;
}
int binarySearchFirstOccurrence(vector<int>& v,int low,int high ,int key){
        int res=-1;
    while(low<=high){
        
        int mid=low+(high-low)/2;
        if(v[mid]==key){
            res=mid;
            high=mid-1;
        }
        else if(v[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        // return res;
    }
    
    return res;
}
int main()
{
    vector<int> v={1,2,3,4,4,4,4,4,5,6};
    int x=binarySearchFirstOccurrence(v,0,v.size(),4);
    int y=binarySearchLastOccurrence(v,0,v.size(),4);
    cout<<x<<" "<<y<<" ";
    cout<<"No of Ocuurences "<<y-x+1;

    return 0;
}
