/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int binarySearch(vector<int>& v,int low,int high,int key ){
      int res=-1;
    while(low<=high){
        
        int mid=low+(high-low)/2;
        if(v[mid]==key){
            res=mid;
            return res;
        }
        else if(v[mid]>key){
             high=mid-1;
            res=v[mid];
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
    vector<int> v={0,1,2,3,4,8,9,10,14};
    int x=binarySearch(v,0,v.size(),5);
    
    cout<<x;

    return 0;
}
